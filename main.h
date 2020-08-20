/*
 * main.h
 *
 *  Created on: Mar 4, 2020
 *      Author: embeddedfab
 */

#ifndef MAIN_H_
#define MAIN_H_

#include<avr/io.h>
#include<util/delay.h>


#include"MCAL/UART.h"
#include"HAL/lm35.h"
#include"HAL/LCD.h"

#define DEFAULT_DESIRED_TEMP  32
#define LM35_CH               6

#define   Heater_init    	DDRD|=(1<<PD4)
#define   Buzzer_init       DDRD|=(1<<PD5)

#define   Heater_ON         PORTD|=(1<<PD4)
#define   Buzzer_ON         PORTD|=(1<<PD5)
#define   Heater_OFF        PORTD&=~(1<<PD4)
#define   Buzzer_OFF        PORTD&=~(1<<PD5)

#define   UP_SW_init        DDRD&=~(1<<PD2)
#define   DOWN_SW_init      DDRD&=~(1<<PD3)

#define   UP_SW_reading     PIND&(1<<PD2)
#define   DOWN_SW_reading   PIND&(1<<PD3)


#endif /* MAIN_H_ */
