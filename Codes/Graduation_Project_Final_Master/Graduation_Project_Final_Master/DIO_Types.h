/*
 * DIO_Types.h
 *
 * Created: 05-Dec-20 6:10:57 PM
 *  Author: George Zaky
 */ 


#ifndef DIO_TYPES_H_
#define DIO_TYPES_H_

typedef enum{
	DIO_ChannelA0=0,
	DIO_ChannelA1,
	DIO_ChannelA2,
	DIO_ChannelA3,
	DIO_ChannelA4,
	DIO_ChannelA5,
	DIO_ChannelA6,
	DIO_ChannelA7,
	
	DIO_ChannelB0,
	DIO_ChannelB1,
	DIO_ChannelB2,
	DIO_ChannelB3,
	DIO_ChannelB4,
	DIO_ChannelB5,
	DIO_ChannelB6,
	DIO_ChannelB7,
	
	DIO_ChannelC0,
	DIO_ChannelC1,
	DIO_ChannelC2,
	DIO_ChannelC3,
	DIO_ChannelC4,
	DIO_ChannelC5,
	DIO_ChannelC6,
	DIO_ChannelC7,
	
	DIO_ChannelD0,
	DIO_ChannelD1,
	DIO_ChannelD2,
	DIO_ChannelD3,
	DIO_ChannelD4,
	DIO_ChannelD5,
	DIO_ChannelD6,
	DIO_ChannelD7,
	
	UCSRA_Channel0,
	UCSRA_Channel1,
	UCSRA_Channel2,
	UCSRA_Channel3,
	UCSRA_Channel4,
	UCSRA_Channel5,
	UCSRA_Channel6,
	UCSRA_Channel7,
	
	UCSRB_Channel0,
	UCSRB_Channel1,
	UCSRB_Channel2,
	UCSRB_Channel3,
	UCSRB_Channel4,
	UCSRB_Channel5,
	UCSRB_Channel6,
	UCSRB_Channel7,
	
	UCSRC_Channel0,
	UCSRC_Channel1,
	UCSRC_Channel2,
	UCSRC_Channel3,
	UCSRC_Channel4,
	UCSRC_Channel5,
	UCSRC_Channel6,
	UCSRC_Channel7,
	
	UDR_Channel0,
	UDR_Channel1,
	UDR_Channel2,
	UDR_Channel3,
	UDR_Channel4,
	UDR_Channel5,
	UDR_Channel6,
	UDR_Channel7,
	
	UBRRL_Channel0,
	UBRRL_Channel1,
	UBRRL_Channel2,
	UBRRL_Channel3,
	UBRRL_Channel4,
	UBRRL_Channel5,
	UBRRL_Channel6,
	UBRRL_Channel7,
	
	UBRRH_Channel0,
	UBRRH_Channel1,
	UBRRH_Channel2,
	UBRRH_Channel3,
	UBRRH_Channel4,
	UBRRH_Channel5,
	UBRRH_Channel6,
	UBRRH_Channel7,
	
	SPCR_Channel0,
	SPCR_Channel1,
	SPCR_Channel2,
	SPCR_Channel3,
	SPCR_Channel4,
	SPCR_Channel5,
	SPCR_Channel6,
	SPCR_Channel7,
	
	SPSR_Channel0,
	SPSR_Channel1,
	SPSR_Channel2,
	SPSR_Channel3,
	SPSR_Channel4,
	SPSR_Channel5,
	SPSR_Channel6,
	SPSR_Channel7

	}DIO_ChannelTypes;
	
typedef enum{
	DIO_PortA=0,
	DIO_PortB,
	DIO_PortC,
	DIO_PortD,
	UCSRA,
	UCSRB,
	UCSRC,
	UDR,
	UBRRL,
	UBRRH,
	SPCR,
	SPSR	
	
	}DIO_PortTypes;

typedef enum{
	Input=0,
	Output

	}DIO_DirTypes;


#endif /* DIO_TYPES_H_ */