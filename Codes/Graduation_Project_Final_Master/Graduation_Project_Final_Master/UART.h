/*
 * UART.h
 *
 * Created: 27-Jan-21 6:31:51 PM
 *  Author: George Zaky
 */ 


#ifndef UART_H_
#define UART_H_

#define F_CPU 16000000UL
#define BaudRate 9600

#define TXEN UCSRB_Channel3
#define RXEN UCSRB_Channel4
#define RXCIE UCSRB_Channel7
#define URSEL UCSRC_Channel7
#define UCSZ0 UCSRC_Channel1
#define UCSZ1 UCSRC_Channel2
#define RXC UCSRA_Channel7


#ifndef DoubleSpeed
	#define MyUBRR ((F_CPU/(16UL*BaudRate))-1)
#else
	#define MyUBRR ((F_CPU/(8UL*BaudRate))-1)
#endif


void Uart_Init();
void Uart_TxChar(char data);
char Uart_RxChar();
void Uart_TxString(char * string);




#endif /* UART_H_ */