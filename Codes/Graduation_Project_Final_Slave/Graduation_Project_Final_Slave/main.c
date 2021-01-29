/*
* Graduation_Project_Slave.c
*
* Created: 29-Jan-21 1:44:47 AM
* Author : George Zaky
*/

#include "DIO.h"
#include "SPI.h"
#include <avr/interrupt.h>

#define LED_1 DIO_ChannelC7 
#define LED_2 DIO_ChannelC6

char No_repeat = 0x00;
int main(void)
{
	DIO_Init();
	SPI_Init_Slave();
	LCD_Init();
	sei();
	
	while (1)
	{
		switch (SPDR_Reg)
		{
			case 0x01:
			if ( No_repeat == 0x01){
				No_repeat = 0x00;
				Clear_LCD();
				LCD_SendString("Act1 ON");
			}
			break;
			
			case 0x02:
			if ( No_repeat == 0x01){
				No_repeat = 0x00;
				Clear_LCD();
				LCD_SendString("Act1 OFF");
			}
			break;
			
			case 0x08:
			if ( No_repeat == 0x01){
				No_repeat = 0x00;
				Clear_LCD();
				LCD_SendString("Act2 ON");
			}
			break;
			
			case 0x09:
			if ( No_repeat == 0x01){
				No_repeat = 0x00;
				Clear_LCD();
				LCD_SendString("Act2 OFF");
			}
			break;
			
		}
	}
}

ISR(SPI_STC_vect)
{
	switch (SPDR_Reg)
	{
		case 0x01:
		DIO_WriteChannel(LED_1,STD_High);
		No_repeat =0x01;
		break;
		
		case 0x02:
		DIO_WriteChannel(LED_1,STD_Low);
		No_repeat =0x01;
		break;
		
		case 0x08:
		DIO_WriteChannel(LED_2,STD_High);
		No_repeat =0x01;
		break;
		
		case 0x09:
		DIO_WriteChannel(LED_2,STD_Low);
		No_repeat =0x01;
		break;
		
	}
	
}

