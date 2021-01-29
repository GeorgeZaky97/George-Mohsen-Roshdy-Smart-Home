/*
* DIO.c
*
* Created: 05-Dec-20 6:34:54 PM
*  Author: George Zaky
*/

#include "DIO.h"

void DIO_WriteChannel(DIO_ChannelTypes ChannelId,STD_LevelTypes level){
	DIO_PortTypes Portx = ChannelId/8;
	DIO_ChannelTypes ChannelPos = ChannelId%8;
	switch(Portx){
		case DIO_PortA:
		if(level == STD_High){
			SetBit(PORTA_Reg,ChannelPos);
		}
		else{
			ClearBit(PORTA_Reg,ChannelPos);
		}
		break;
		
		case DIO_PortB:
		if(level == STD_High){
			SetBit(PORTB_Reg,ChannelPos);
		}
		else{
			ClearBit(PORTB_Reg,ChannelPos);
		}
		break;
		
		case DIO_PortC:
		if(level == STD_High){
			SetBit(PORTC_Reg,ChannelPos);
		}
		else{
			ClearBit(PORTC_Reg,ChannelPos);
		}
		break;
		
		case DIO_PortD:
		if(level == STD_High){
			SetBit(PORTD_Reg,ChannelPos);
		}
		else{
			ClearBit(PORTD_Reg,ChannelPos);
		}
		break;
		
		case UCSRA:
		if(level == STD_High){
			SetBit(UCSRA_Reg,ChannelPos);
		}
		else{
			ClearBit(UCSRA_Reg,ChannelPos);
		}
		break;
		
		case UCSRB:
		if(level == STD_High){
			SetBit(UCSRB_Reg,ChannelPos);
		}
		else{
			ClearBit(UCSRB_Reg,ChannelPos);
		}
		break;
		
		case UCSRC:
		if(level == STD_High){
			SetBit(UCSRC_Reg,ChannelPos);
		}
		else{
			ClearBit(UCSRC_Reg,ChannelPos);
		}
		break;
		
		case UDR:
		if(level == STD_High){
			SetBit(UDR_Reg,ChannelPos);
		}
		else{
			ClearBit(UDR_Reg,ChannelPos);
		}
		break;
		
		case UBRRL:
		if(level == STD_High){
			SetBit(UBRRL_Reg,ChannelPos);
		}
		else{
			ClearBit(UBRRL_Reg,ChannelPos);
		}
		break;
		
		case UBRRH:
		if(level == STD_High){
			SetBit(UBRRH_Reg,ChannelPos);
		}
		else{
			ClearBit(UBRRH_Reg,ChannelPos);
		}
		break;
		
		case SPCR:
		if(level == STD_High){
			SetBit(SPCR_Reg,ChannelPos);
		}
		else{
			ClearBit(SPCR_Reg,ChannelPos);
		}
		break;
		
		case SPSR:
		if(level == STD_High){
			SetBit(SPSR_Reg,ChannelPos);
		}
		else{
			ClearBit(SPSR_Reg,ChannelPos);
		}
		break;
		
	}
 }
	
STD_LevelTypes DIO_ReadChannel(DIO_ChannelTypes ChannelId){
	DIO_PortTypes Portx = ChannelId/8;
	DIO_ChannelTypes ChannelPos = ChannelId%8;
	STD_LevelTypes level =STD_Low;
	switch(Portx){
		case DIO_PortA:
		level = GetBit(PINA_Reg,ChannelPos);		
		break;
		
		case DIO_PortB:
		level = GetBit(PINB_Reg,ChannelPos);
		break;
		
		case DIO_PortC:
		level = GetBit(PINC_Reg,ChannelPos);
		break;
		
		case DIO_PortD:
		level = GetBit(PIND_Reg,ChannelPos);
		break;
		
		case UCSRA:
		level = GetBit(UCSRA_Reg,ChannelPos);
		break;
		
		case UCSRB:
		level = GetBit(UCSRB_Reg,ChannelPos);
		break;
		
		case UCSRC:
		level = GetBit(UCSRC_Reg,ChannelPos);
		break;
		
		case UDR:
		level = GetBit(UDR_Reg,ChannelPos);
		break;
		
		case UBRRL:
		level = GetBit(UBRRL_Reg,ChannelPos);
		break;
		
		case UBRRH:
		level = GetBit(UBRRH_Reg,ChannelPos);
		break;
		
		case SPCR:
		level = GetBit(SPCR_Reg,ChannelPos);
		break;
		
		case SPSR:
		level = GetBit(SPSR_Reg,ChannelPos);
		break;
			
		}
		return level;
	}