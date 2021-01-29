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
	SPSR_Channel7,
	
	SREG_Channel0,
	SREG_Channel1,
	SREG_Channel2,
	SREG_Channel3,
	SREG_Channel4,
	SREG_Channel5,
	SREG_Channel6,
	SREG_Channel7

	}DIO_ChannelTypes;
	
typedef enum{
	DIO_PortA=0,
	DIO_PortB,
	DIO_PortC,
	DIO_PortD,
	SPCR,
	SPSR,
	SREG	
	
	}DIO_PortTypes;

typedef enum{
	Input=0,
	Output

	}DIO_DirTypes;


#endif /* DIO_TYPES_H_ */