/*
 * ADC.h
 *
 *  Created on: Nov 6, 2019
 *      Author: embeddedfab
 */

#ifndef ADC_H_
#define ADC_H_
#include<avr/io.h>

void ADC_init(void);
unsigned int ADC_Get_reading_mv(char ch);


#endif /* ADC_H_ */
