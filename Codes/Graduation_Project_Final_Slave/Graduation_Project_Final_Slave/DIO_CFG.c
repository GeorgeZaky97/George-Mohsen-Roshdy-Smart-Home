/*
* DIO_CFG.c
*
* Created: 05-Dec-20 6:35:21 PM
*  Author: George Zaky
*/

#include "DIO_CFG.h"

const DIO_PinCFGType PinCFG[] = {
	//PORTA
	{Output,STD_High},
	{Output,STD_High},
	{Output,STD_High},
	{Output,STD_High},
	{Output,STD_High},
	{Output,STD_High},
	{Output,STD_High},
	{Output,STD_High},
	//PORTB
	{Output,STD_High},
	{Output,STD_High},
	{Output,STD_High},
	{Output,STD_High},
	{Input,STD_Low},////
	{Input,STD_Low},////
	{Output,STD_Low},///
	{Input,STD_Low},////
	//PORTC
	{Output,STD_High},
	{Output,STD_High},
	{Output,STD_High},
	{Output,STD_High},
	{Output,STD_High},
	{Output,STD_High},
	{Output,STD_Low},/////
	{Output,STD_Low},/////
	//PORTD
	{Output,STD_High},
	{Output,STD_High},
	{Output,STD_High},
	{Output,STD_High},
	{Output,STD_High},
	{Output,STD_High},
	{Output,STD_High},
	{Output,STD_High},
	
};

void DIO_Init(){
	DIO_PortTypes Portx;
	DIO_ChannelTypes ChannelPos;
	Uint8 Count = 0;
	for(Count=DIO_ChannelA0;Count<PINCOUNT;Count++){
		Portx = Count/8;
		ChannelPos = Count%8;
		switch(Portx){
			case DIO_PortA:
			if(PinCFG[Count].PinDir == Output){
				SetBit(DDRA_Reg,ChannelPos);
			}
			else{
				ClearBit(DDRA_Reg,ChannelPos);
			}
			break;
			case DIO_PortB:
			if(PinCFG[Count].PinDir == Output){
				SetBit(DDRB_Reg,ChannelPos);
			}
			else{
				ClearBit(DDRB_Reg,ChannelPos);
			}
			break;
			case DIO_PortC:
			if(PinCFG[Count].PinDir == Output){
				SetBit(DDRC_Reg,ChannelPos);
			}
			else{
				ClearBit(DDRC_Reg,ChannelPos);
			}
			break;
			case DIO_PortD:
			if(PinCFG[Count].PinDir == Output){
				SetBit(DDRD_Reg,ChannelPos);
			}
			else{
				ClearBit(DDRD_Reg,ChannelPos);
			}
			break;
		}
	}
}