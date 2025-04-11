/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
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

#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif


#include "stm32f4xx_hal.h"
#include "stm32f429i_discovery.h"

#define TX_APP_MEM_POOL_SIZE                     3 * 1024  // Max size of the ThreadX memory pools (byte)


/* Function prototypes -------------------------------------------------------*/
extern void Error_Handler(void);


#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
