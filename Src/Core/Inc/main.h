/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32f0xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define GAS_Pressure_0_Pin GPIO_PIN_0
#define GAS_Pressure_0_GPIO_Port GPIOA
#define GAS_Pressure_1_Pin GPIO_PIN_1
#define GAS_Pressure_1_GPIO_Port GPIOA
#define OIL_Pressure_0_Pin GPIO_PIN_2
#define OIL_Pressure_0_GPIO_Port GPIOA
#define OIL_Pressure_1_Pin GPIO_PIN_3
#define OIL_Pressure_1_GPIO_Port GPIOA
#define SDC_Voltage_Pin GPIO_PIN_4
#define SDC_Voltage_GPIO_Port GPIOA
#define SDC_Current_Pin GPIO_PIN_5
#define SDC_Current_GPIO_Port GPIOA
#define AS_CLOSE_SDC_Pin GPIO_PIN_0
#define AS_CLOSE_SDC_GPIO_Port GPIOB
#define LED_1_Pin GPIO_PIN_8
#define LED_1_GPIO_Port GPIOA
#define LED_2_Pin GPIO_PIN_9
#define LED_2_GPIO_Port GPIOA
#define WATCHDOG_Pin GPIO_PIN_3
#define WATCHDOG_GPIO_Port GPIOB
#define MCU_CONTROLS_BRAKE_0_Pin GPIO_PIN_4
#define MCU_CONTROLS_BRAKE_0_GPIO_Port GPIOB
#define MCU_CONTROLS_BRAKE_1_Pin GPIO_PIN_5
#define MCU_CONTROLS_BRAKE_1_GPIO_Port GPIOB
#define WATCHDOG_IS_READY_Pin GPIO_PIN_6
#define WATCHDOG_IS_READY_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
