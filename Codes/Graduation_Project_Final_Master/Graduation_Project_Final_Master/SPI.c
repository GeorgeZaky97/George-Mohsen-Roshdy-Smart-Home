/*
 * SPI.c
 *
 * Created: 28-Jan-21 8:26:07 PM
 *  Author: George Zaky
 */ 
#include "SPI.h"

void SPI_Init_Master(){
		Slave_Dis();
		DIO_WriteChannel(SPE,STD_High);
		DIO_WriteChannel(MSTR,STD_High);
		
		/*case Slave:
		DDRB |= (1<<MISO);
		DDRB &=~ ((1<<MOSI)|(1<<SCK)|(1<<SS));
		SPCR |= (1<<SPE);
		
		break;*/
}

unsigned char SPI_TxRx(unsigned char data){
	SPDR_Reg = data;
	while(!(DIO_ReadChannel(SPIF)));
	return SPDR_Reg;
}