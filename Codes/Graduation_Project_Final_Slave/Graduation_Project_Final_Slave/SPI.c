/*
 * SPI.c
 *
 * Created: 28-Jan-21 8:26:07 PM
 *  Author: George Zaky
 */ 
#include "SPI.h"

void SPI_Init_Slave(){
		DIO_WriteChannel(SPE,STD_High);
		DIO_WriteChannel(SPIE,STD_High);
}

unsigned char SPI_TxRx(unsigned char data){
	SPDR_Reg = data;
	while(!(DIO_ReadChannel(SPIF)));
	return SPDR_Reg;
}