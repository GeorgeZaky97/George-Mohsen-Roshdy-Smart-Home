/*
* DIO_CFG.h
*
* Created: 05-Dec-20 6:35:29 PM
*  Author: George Zaky
*/


#ifndef DIO_CFG_H_
#define DIO_CFG_H_

#include "DIO_HW.h"
#include "DIO_Types.h"
#include "Std_Types.h"
#include "BitMath.h"

typedef struct{
	DIO_DirTypes PinDir;
	STD_LevelTypes level;	
}DIO_PinCFGType;

#define PINCOUNT 32

void DIO_Init(void);


#endif /* DIO_CFG_H_ */