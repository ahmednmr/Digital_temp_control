/*
 * main.c
 *
 *  Created on: Jan 28, 2018
 *      Author: Hani
 */
#include"main.h"





int main(void)
{
	unsigned char temperature_value=0,Desired_temp=DEFAULT_DESIRED_TEMP;

	Buzzer_init;
	Heater_init;
	lm35_init();
	init_UART();
	LCD_VidInit();


	while(1)                     /* Super LOOP */
	{

		if(UP_SW_reading)
		{
			Desired_temp++;
		}
		if(DOWN_SW_reading)
		{
			Desired_temp--;
		}

		temperature_value=lm35_Get_Temp_reading(LM35_CH);
		UART_SEND_string("\r\n temperature_value   : ");
		UART_SEND_number(temperature_value);
		UART_SEND_string("\r\n Desired_temp        : ");
		UART_SEND_number(Desired_temp);

		LCD_vidGoTo(0,0);
		LCD_vidsendword("C temperature :");
		LCD_SEND_number(temperature_value);
		LCD_vidGoTo(1,0);
		LCD_vidsendword("D temperature :");
		LCD_SEND_number(Desired_temp);



		if(temperature_value>(Desired_temp+2))
		{
			Buzzer_OFF;
			Heater_OFF;
			UART_SEND_string("\r\n TURN OFF Heater and Buzzer ");
		}
		else if(temperature_value<=(Desired_temp-2))
		{
			Buzzer_ON;
			Heater_ON;
			UART_SEND_string("\r\n TURN ON Heater and Buzzer ");

		}

		UART_SEND_string("\r\n");
		_delay_ms(1000);
	}
	return 0 ;
}

