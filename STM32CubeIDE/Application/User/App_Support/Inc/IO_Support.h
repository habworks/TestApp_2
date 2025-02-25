#ifndef INC_IO_SUPPORT_H_
#define INC_IO_SUPPORT_H_

#ifdef __cplusplus
extern"C" {
#endif

#include "main.h"

#define MAIN_PWR_ON()           HAL_GPIO_WritePin(MAIN_PWR_EN_GPIO_Port, MAIN_PWR_EN_Pin, GPIO_PIN_SET)
#define MAIN_PWR_OFF()          HAL_GPIO_WritePin(MAIN_PWR_EN_GPIO_Port, MAIN_PWR_EN_Pin, GPIO_PIN_RESET)

#define STATUS_LED_ON()         HAL_GPIO_WritePin(STATUS_LED_GPIO_Port, STATUS_LED_Pin, GPIO_PIN_SET)
#define STATUS_LED_OFF()        HAL_GPIO_WritePin(STATUS_LED_GPIO_Port, STATUS_LED_Pin, GPIO_PIN_RESET)
#define STATUS_LED_TOGGLE()     HAL_GPIO_TogglePin(STATUS_LED_GPIO_Port, STATUS_LED_Pin)

#ifdef __cplusplus
}
#endif
#endif /* INC_IO_SUPPORT_H_ */
