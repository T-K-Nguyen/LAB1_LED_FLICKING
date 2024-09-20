/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2024 STMicroelectronics.
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
#include "stm32f1xx_hal.h"

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
#define ONE_Pin GPIO_PIN_4
#define ONE_GPIO_Port GPIOA
#define TWO_Pin GPIO_PIN_5
#define TWO_GPIO_Port GPIOA
#define THREE_Pin GPIO_PIN_6
#define THREE_GPIO_Port GPIOA
#define FOUR_Pin GPIO_PIN_7
#define FOUR_GPIO_Port GPIOA
#define LED_F2_Pin GPIO_PIN_12
#define LED_F2_GPIO_Port GPIOB
#define LED_G2_Pin GPIO_PIN_13
#define LED_G2_GPIO_Port GPIOB
#define FIVE_Pin GPIO_PIN_8
#define FIVE_GPIO_Port GPIOA
#define SIX_Pin GPIO_PIN_9
#define SIX_GPIO_Port GPIOA
#define SEVEN_Pin GPIO_PIN_10
#define SEVEN_GPIO_Port GPIOA
#define EIGHT_Pin GPIO_PIN_11
#define EIGHT_GPIO_Port GPIOA
#define NINE_Pin GPIO_PIN_12
#define NINE_GPIO_Port GPIOA
#define TEN_Pin GPIO_PIN_13
#define TEN_GPIO_Port GPIOA
#define ELVEN_Pin GPIO_PIN_14
#define ELVEN_GPIO_Port GPIOA
#define TWELVE_Pin GPIO_PIN_15
#define TWELVE_GPIO_Port GPIOA
#define LED_D_Pin GPIO_PIN_3
#define LED_D_GPIO_Port GPIOB
#define LED_E_Pin GPIO_PIN_4
#define LED_E_GPIO_Port GPIOB
#define LED_F_Pin GPIO_PIN_5
#define LED_F_GPIO_Port GPIOB
#define LED_G_Pin GPIO_PIN_6
#define LED_G_GPIO_Port GPIOB
#define LED_A2_Pin GPIO_PIN_7
#define LED_A2_GPIO_Port GPIOB
#define LED_B2_Pin GPIO_PIN_8
#define LED_B2_GPIO_Port GPIOB
#define LED_C2_Pin GPIO_PIN_9
#define LED_C2_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
