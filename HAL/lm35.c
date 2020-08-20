/*
 * lm35.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Nmr
 */

#include"lm35.h"


void lm35_init(void)
{
	ADC_init();
}
unsigned char lm35_Get_Temp_reading(char ch)
{
	unsigned char temp=0;
	unsigned int reading_in_mv=0;


	reading_in_mv=ADC_Get_reading_mv(ch)*4.88;
	temp=reading_in_mv/10;


	return temp;
}

