/**
  ******************************************************************************
  * @file           : app_threadx.h
  * @brief          : ThreadX application header file
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

#ifndef __APP_THREADX_H__
#define __APP_THREADX_H__

#ifdef __cplusplus
extern "C" {
#endif


#include "tx_api.h"
#include "main.h"


/* Functions prototypes ---------------------------------------------*/


/* Constant definition -----------------------------------------------------------*/
#define APP_STACK_SIZE                           512
#define APP_BYTE_POOL_SIZE                       (12 * 1024)

#define THREAD_ONE_PRIO                          10
#define THREAD_ONE_PREEMPTION_THRESHOLD          THREAD_ONE_PRIO
#define THREAD_TWO_PRIO                          10
#define THREAD_TWO_PREEMPTION_THRESHOLD          9
#define MAIN_THREAD_PRIO                         5
#define MAIN_THREAD_PREEMPTION_THRESHOLD         MAIN_THREAD_PRIO

#define NEW_THREAD_TWO_PRIO                      8
#define NEW_THREAD_TWO_PREEMPTION_THRESHOLD      8

#define THREAD_ONE_EVT                           0x01
#define THREAD_TWO_EVT                           0x02
/* USER CODE END PD */


#ifdef __cplusplus
}
#endif
#endif /* __APP_THREADX_H__ */
