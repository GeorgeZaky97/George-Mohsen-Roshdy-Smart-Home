/*
 * LCD.h
 *
 * Created: 11-Dec-20 4:18:38 PM
 *  Author: George Zaky
 */ 


#ifndef LCD_H_
#define LCD_H_

#include "DIO.h"
#define F_CPU 16000000UL
#include <util/delay.h>

#define LCDDataPort PORTA_Reg

#define RS DIO_ChannelB1
#define RW DIO_ChannelB2
#define E DIO_ChannelB3



void LCD_Cmd(Uint8 cmd);
void LCD_Init(void);
void LCD_SendChar(Uint8 data);
void LCD_SendString(char * string);
void LCD_SendStringPos(char * string,Uint8 line,Uint8 pos);
void Clear_LCD();






#endif /* LCD_H_ */