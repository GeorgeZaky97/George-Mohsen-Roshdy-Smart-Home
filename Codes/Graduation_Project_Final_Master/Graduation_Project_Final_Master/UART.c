/*
 * UART.c
 *
 * Created: 27-Jan-21 6:31:39 PM
 *  Author: George Zaky
 */ 
#include "UART.h"
#include "DIO.h"


void Uart_Init(){
	//8bit-1stop bit-baudrate 9600
	DIO_WriteChannel(TXEN,STD_High);
	DIO_WriteChannel(RXEN,STD_High);
	DIO_WriteChannel(RXCIE,STD_High);
	DIO_WriteChannel(URSEL,STD_High);
	DIO_WriteChannel(UCSZ0,STD_High);
	DIO_WriteChannel(UCSZ1,STD_High);
	
	UBRRH_Reg = (MyUBRR>>8);
	UBRRL_Reg = MyUBRR;
	
}

void Uart_TxChar(char data){
	while (DIO_ReadChannel(UCSRA_Channel5) ==0);
	UDR_Reg = data;
}

char Uart_RxChar(){
	while (DIO_ReadChannel(RXC) ==0);
	return UDR_Reg;
}

void Uart_TxString(char * string){
	unsigned i = 0;
	while (string[i] != '\0')
	{
		Uart_TxChar(string[i]);
		i++;
	}
}