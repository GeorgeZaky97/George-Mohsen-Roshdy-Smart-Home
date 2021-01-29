/*
* LCD.c
*
* Created: 11-Dec-20 4:18:20 PM
*  Author: George Zaky
*/
#include "LCD.h"

void LCD_Cmd(Uint8 cmd){
	LCDDataPort = (LCDDataPort & 0X0F) | (cmd & 0XF0);
	DIO_WriteChannel(RS,STD_Low);
	DIO_WriteChannel(E,STD_Low);
	_delay_ms(100);
	DIO_WriteChannel(E,STD_High);
	
	_delay_ms(5);
	
	LCDDataPort = (LCDDataPort & 0X0F) | (cmd << 4);
	DIO_WriteChannel(E,STD_Low);
	_delay_ms(100);
	DIO_WriteChannel(E,STD_High);
	_delay_ms(2);
	
}

void LCD_Init(void){
	_delay_ms(20);
	DIO_WriteChannel(RW,STD_Low);
	LCD_Cmd(0X33);
	_delay_ms(150);
	LCD_Cmd(0X32);
	LCD_Cmd(0X28);  //4bit mode DL-low, pixels 5x8 F, number of lines 2 N (Function set)
	LCD_Cmd(0X06);  // Entry Mode
	LCD_Cmd(0X0C);	//
	LCD_Cmd(0X01);
	_delay_ms(2);
	
	
}

void LCD_SendChar(Uint8 data){
	LCDDataPort = (LCDDataPort & 0X0F) | (data & 0XF0);
	DIO_WriteChannel(RS,STD_High);
	DIO_WriteChannel(E,STD_Low);
	_delay_ms(100);
	DIO_WriteChannel(E,STD_High);
	
	_delay_ms(2);
	
	LCDDataPort = (LCDDataPort & 0X0F) | (data << 4);
	DIO_WriteChannel(E,STD_Low);
	_delay_ms(100);
	DIO_WriteChannel(E,STD_High);
	_delay_ms(2);
}

void LCD_SendString(char * string){
	Uint8 i = 0;
	while(string[i] != '\0')
	{
		LCD_SendChar(string[i]);
		i++;
	}
}

	
void LCD_SendStringPos(char * string,Uint8 line,Uint8 pos)
{
	switch(line){
		case 1:
		LCD_Cmd((0x80 |(pos & 0x0F)));
		LCD_SendString(string);
		break;
		case 2:
		LCD_Cmd((0xC0 |(pos & 0x0F)));
		LCD_SendString(string);
		break;
	}
}

void Clear_LCD()
{
	Uint8 pos =0x00;
	for(pos=0x00; pos<16;pos++)
	{
		LCD_Cmd((0x80 |(pos & 0x0F)));
		LCD_SendChar('\0');
	}
	LCD_Cmd((0x80 |(0x00 & 0x0F)));
}