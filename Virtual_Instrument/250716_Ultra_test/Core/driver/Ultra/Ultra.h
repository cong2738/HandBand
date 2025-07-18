#ifndef DRIVER_ULTRA_ULTRA_H_
#define DRIVER_ULTRA_ULTRA_H_

#include "stm32h7xx_hal.h"
#include "tim.h"


void Ultra_Trigger_Input();
uint32_t Ultra_Echo();
uint16_t Ultra_Calculate(uint32_t count);

#endif /* DRIVER_ULTRA_ULTRA_H_ */
