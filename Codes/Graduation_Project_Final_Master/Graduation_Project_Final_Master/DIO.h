/*
 * DIO.h
 *
 * Created: 05-Dec-20 6:34:43 PM
 *  Author: George Zaky
 */ 


#ifndef DIO_H_
#define DIO_H_

#include "DIO_HW.h"
#include "DIO_Types.h"
#include "Std_Types.h"
#include "BitMath.h"
#include "DIO_CFG.h"


void DIO_WriteChannel(DIO_ChannelTypes ChannelId,STD_LevelTypes level);
STD_LevelTypes DIO_ReadChannel(DIO_ChannelTypes ChannelId);







#endif /* DIO_H_ */