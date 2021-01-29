/*
* Graduation_Project_Master.c
*
* Created: 28-Jan-21 10:13:34 PM
* Author : George Zaky
*/

#include "DIO.h"
#include "UART.h"
#include "SPI.h"
#define F_CPU 16000000UL
#include <util/delay.h>
#include <avr/interrupt.h>

char SPI_DATA = 0x00;
char UART_DATA = 0x00;

int main(void)
{
	DIO_Init();
	Uart_Init();
	SPI_Init_Master();
	LCD_Init();
	Slave_EN();
	sei();
	
	
	
	
	while (1)
	{
		if(UART_DATA == '1')
		{
			UART_DATA ='0';
			LCD_SendString("1 ON");
		}
		
		else if (UART_DATA == '2')
		{
			UART_DATA ='0';
			Clear_LCD();
			LCD_SendString("1 OFF");
		}
		
		else if (UART_DATA == '8')
		{
			UART_DATA ='0';
			Clear_LCD();
			LCD_SendString("2 ON");
		}
		
		else if (UART_DATA == '9')
		{
			UART_DATA ='0';
			Clear_LCD();
			LCD_SendString("2 OFF");
		}
				
	}
}


ISR(USART_RXC_vect)
{
	UART_DATA = Uart_RxChar();
	if(UART_DATA == '1')
	{
		SPI_DATA = SPI_TxRx(0x01);
	}
	else if (UART_DATA == '2')
	{
		SPI_DATA = SPI_TxRx(0x02);
	}
	else if (UART_DATA == '8')
	{
		SPI_DATA = SPI_TxRx(0x08);
	}
	
	else if (UART_DATA == '9')
	{
		SPI_DATA = SPI_TxRx(0x09);
	}
}