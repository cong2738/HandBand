/*
 * FND.h
 *
 *  Created on: Jun 20, 2025
 *      Author: kccistc
 */

#ifndef DRIVER_FND_FND_H_
#define DRIVER_FND_FND_H_
#include "stm32h7xx_hal.h"

#define FND_DP_1 0x01
#define FND_DP_10 0x02
#define FND_DP_100 0x04
#define FND_DP_1000 0x08
#define FND_DP_ON 1
#define FND_DP_OFF 0

void FND_WriteData(uint16_t data);
void FND_WriteDp(uint8_t dpData, uint8_t dpState);
uint16_t FND_ReadData();
void FND_DispDataCallBack();

#endif /* DRIVER_FND_FND_H_ */
