/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l4xx_hal.h"


#define PASS_THROUGH_UART       (0)

void debugPrintln(char _out[]);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LORA_RESET_Pin GPIO_PIN_6
#define LORA_RESET_GPIO_Port GPIOB
#define GPS_RESET_Pin GPIO_PIN_2
#define GPS_RESET_GPIO_Port GPIOC
#define CELL_ON_Pin GPIO_PIN_4
#define CELL_ON_GPIO_Port GPIOA
#define CELL_RESET_Pin GPIO_PIN_5
#define CELL_RESET_GPIO_Port GPIOA
#define CELL_POWER_Pin GPIO_PIN_5
#define CELL_POWER_GPIO_Port GPIOC
#define GPS_POWER_Pin GPIO_PIN_0
#define GPS_POWER_GPIO_Port GPIOB
#define SW4_Pin GPIO_PIN_1
#define SW4_GPIO_Port GPIOB
#define SW3_Pin GPIO_PIN_2
#define SW3_GPIO_Port GPIOB
#define SW2_Pin GPIO_PIN_10
#define SW2_GPIO_Port GPIOB
#define SW1_Pin GPIO_PIN_11
#define SW1_GPIO_Port GPIOB
#define LED4_Pin GPIO_PIN_7
#define LED4_GPIO_Port GPIOC
#define LED3_Pin GPIO_PIN_8
#define LED3_GPIO_Port GPIOC
#define LED2_Pin GPIO_PIN_9
#define LED2_GPIO_Port GPIOC
#define LED1_Pin GPIO_PIN_8
#define LED1_GPIO_Port GPIOA

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
