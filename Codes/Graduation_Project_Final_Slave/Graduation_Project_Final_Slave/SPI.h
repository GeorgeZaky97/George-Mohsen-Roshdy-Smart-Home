/*
 * SPI.h
 *
 * Created: 28-Jan-21 8:26:20 PM
 *  Author: George Zaky
 */ 


#ifndef SPI_H_
#define SPI_H_
#include "DIO.h"

#define SS DIO_ChannelB4
#define MOSI DIO_ChannelB5
#define MISO DIO_ChannelB6
#define SCK DIO_ChannelB7
#define SPE SPCR_Channel6
#define MSTR SPCR_Channel4
#define SPIE SPCR_Channel7
#define SPIF SPSR_Channel7

#define Slave_EN() (DIO_WriteChannel(SS,STD_Low))
#define Slave_Dis() (DIO_WriteChannel(SS,STD_High))


	
void SPI_Init_Slave();
unsigned char SPI_TxRx(unsigned char data);



#endif /* SPI_H_ */