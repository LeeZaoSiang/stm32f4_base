/**
  ******************************************************************************
  * @file           : threadx.c
  * @brief          : ThreadX application file
  ******************************************************************************
  * @attention
  *
  * 
  * 
  *
  * 
  *
  ******************************************************************************
  * @author
  * 
  * 
  * ****************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "threadx.h"
#include "main.h"


/* Private variables ---------------------------------------------------------*/
TX_THREAD MainThread;
TX_THREAD SubThread_1;
TX_THREAD SubThread_2;
TX_EVENT_FLAGS_GROUP EventFlag;

/* Local variables ---------------------------------------------------------*/
static UCHAR tx_byte_pool_buffer[TX_APP_MEM_POOL_SIZE];
static TX_BYTE_POOL tx_app_byte_pool;


/* Local function prototypes -----------------------------------------------*/
static void SubThread_1_Entry(ULONG thread_input);
static void SubThread_2_Entry(ULONG thread_input);
static void MainThread_Entry(ULONG thread_input);
static void App_Delay(uint32_t Delay);
static UINT App_ThreadX_Init(void *memory_ptr);


/**
  * **************************************************************************
  * @brief  ThreadX initialization.
  * @param  first_unused_memory : Pointer to the first unused memory
  * @retval None
  * **************************************************************************
  */
void tx_application_define(void *first_unused_memory)
{
  void *memory_ptr;

  if (tx_byte_pool_create(&tx_app_byte_pool, "Tx App memory pool", tx_byte_pool_buffer, TX_APP_MEM_POOL_SIZE) != TX_SUCCESS)
  {
    Error_Handler();
  }
  else
  {
    memory_ptr = (void *)&tx_app_byte_pool;

    if (App_ThreadX_Init(memory_ptr) != TX_SUCCESS)
    {
      Error_Handler();
    }
  }
}


/**
  *******************************************************************************
  * @brief  Thread creation.
  * @param memory_ptr: memory pointer
  * @retval int
  * *****************************************************************************
  */
static UINT App_ThreadX_Init(void *memory_ptr)
{
  TX_BYTE_POOL *byte_pool = (TX_BYTE_POOL*)memory_ptr;

  CHAR *pointer;

  /* Allocate the stack for MainThread.  */
  if (tx_byte_allocate(byte_pool, (void **) &pointer, 
                       APP_STACK_SIZE, TX_NO_WAIT) != TX_SUCCESS)
  {
    return TX_POOL_ERROR;
  } 

  /* Create MainThread  */
  if (tx_thread_create(&MainThread, "Main Thread", MainThread_Entry, 0, 
                       pointer, APP_STACK_SIZE, 
                       MAIN_THREAD_PRIO, MAIN_THREAD_PREEMPTION_THRESHOLD, 
                       TX_NO_TIME_SLICE, TX_AUTO_START) != TX_SUCCESS)
  {
    return TX_THREAD_ERROR;
  }
  
 
  /* Allocate the stack for SubThread_1  */
  if (tx_byte_allocate(byte_pool, (void **) &pointer,
                       APP_STACK_SIZE, TX_NO_WAIT) != TX_SUCCESS)
  {
    return TX_POOL_ERROR;
  }
  
  /* Create SubThread_1  */
  if (tx_thread_create(&SubThread_1, "Sub Thread 1", SubThread_1_Entry, 0,  
                       pointer, APP_STACK_SIZE, 
                       THREAD_ONE_PRIO, THREAD_ONE_PREEMPTION_THRESHOLD,
                       TX_NO_TIME_SLICE, TX_AUTO_START) != TX_SUCCESS)
  {
    return TX_THREAD_ERROR;
  }

  /* Allocate the stack for SubThread_2 */
  if (tx_byte_allocate(byte_pool, (void **) &pointer,
                       APP_STACK_SIZE, TX_NO_WAIT) != TX_SUCCESS)
  {
    return TX_POOL_ERROR;
  }
  
  /* Create SubThread_2  */
  if (tx_thread_create(&SubThread_2, "Sub Thread 2", SubThread_2_Entry, 0,  
                       pointer, APP_STACK_SIZE, 
                       THREAD_TWO_PRIO, THREAD_TWO_PREEMPTION_THRESHOLD,
                       TX_NO_TIME_SLICE, TX_AUTO_START) != TX_SUCCESS)
  {
    return TX_THREAD_ERROR;
  }
  
  /* Create the event flags group  */
  if (tx_event_flags_create(&EventFlag, "Event Flag") != TX_SUCCESS)
  {
    return TX_GROUP_ERROR;
  }
  
  return TX_SUCCESS;
}


/**
  *****************************************************************************
  * @brief  Function implementing the MainThread thread.
  * @param  thread_input: Not used 
  * @retval None
  * ***************************************************************************
  */
static void MainThread_Entry(ULONG thread_input)
{
  UINT old_prio = 0;
  UINT old_pre_threshold = 0;
  ULONG   actual_flags = 0;
  uint8_t count = 0; 
  (void) thread_input;
  while (count < 3)
  {
    count++;
    if (tx_event_flags_get(&EventFlag, THREAD_ONE_EVT, TX_OR_CLEAR, 
                           &actual_flags, TX_WAIT_FOREVER) != TX_SUCCESS)
    {
      Error_Handler();
    }
    else
    {
      /* Update the priority and preemption threshold of SubThread_2 
      to allow the preemption of ThreadOne */
      tx_thread_priority_change(&SubThread_2, NEW_THREAD_TWO_PRIO, &old_prio);
      tx_thread_preemption_change(&SubThread_2, NEW_THREAD_TWO_PREEMPTION_THRESHOLD, &old_pre_threshold);
      
      if (tx_event_flags_get(&EventFlag, THREAD_TWO_EVT, TX_OR_CLEAR, 
                             &actual_flags, TX_WAIT_FOREVER) != TX_SUCCESS)
      {
        Error_Handler();
      }
      else
      {
        /* Reset the priority and preemption threshold of SubThread_2 */ 
        tx_thread_priority_change(&SubThread_2, THREAD_TWO_PRIO, &old_prio);
        tx_thread_preemption_change(&SubThread_2, THREAD_TWO_PREEMPTION_THRESHOLD, &old_pre_threshold);
      }
    }
  }
  /* Destroy ThreadOne and ThreadTwo */
  tx_thread_terminate(&SubThread_1);
  tx_thread_terminate(&SubThread_2);
  
  /* Infinite loop */
  while(1)
  {
    BSP_LED_Toggle(LED3);
    /* Thread sleep for 1s */
    tx_thread_sleep(100);
  }
}

/**
  *****************************************************************************
  * @brief  Function implementing the SubThread_1 thread.
  * @param  thread_input: Not used 
  * @retval None
  *****************************************************************************
  */
static void SubThread_1_Entry(ULONG thread_input)
{
  (void) thread_input;
  uint8_t count = 0;
  /* Infinite loop */
  while(1)
  {
    BSP_LED_Toggle(LED4);
    /* Delay for 500ms (App_Delay is used to avoid context change). */
    App_Delay(50);
    count++;
    if (count == 50)
    {
      count = 0;
      if (tx_event_flags_set(&EventFlag, THREAD_ONE_EVT, TX_OR) != TX_SUCCESS)
      {
        Error_Handler();
      }
    }
  }
}

/**
  ****************************************************************************
  * @brief  Function implementing the SubThread_2 thread.
  * @param  thread_input: Not used 
  * @retval None
  * **************************************************************************
  */
static void SubThread_2_Entry(ULONG thread_input)
{
  (void) thread_input;
  uint8_t count = 0;
  /* Infinite loop */
  while (1)
  {
    BSP_LED_Toggle(LED4);
    /* Delay for 200ms (App_Delay is used to avoid context change). */
    App_Delay(20);
    count ++;
    if (count == 25)
    {
      count = 0;
      if (tx_event_flags_set(&EventFlag, THREAD_TWO_EVT, TX_OR) != TX_SUCCESS)
      {
        Error_Handler();
      }
    }
  }
}

/**
  ****************************************************************************
  * @brief  Application Delay function.
  * @param  Delay : number of ticks to wait
  * @retval None
  ****************************************************************************
  */
static void App_Delay(uint32_t Delay)
{
  UINT initial_time = tx_time_get();
  while ((tx_time_get() - initial_time) < Delay);
}
