/*
 * lm35.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: Nmr
 */

#ifndef HAL_LM35_H_
#define HAL_LM35_H_


#include"../MCAL/ADC.h"

void lm35_init(void);
unsigned char lm35_Get_Temp_reading(char ch);



#endif /* HAL_LM35_H_ */
