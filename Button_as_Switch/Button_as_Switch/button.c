/*
 * button.c
 *
 * Created: 2/10/2018 7:32:27 PM
 *  Author: abdo_essam_aboziad
 */ 
#include "button.h"
void Button_vInit(u8 copy_u8PortName,u8 copy_u8PinNum)
{
	DIO_vSetPinDirection(copy_u8PortName,copy_u8PinNum,0);
}
u8 Button_u8ReadValue(u8 copy_u8PortName,u8 copy_u8PinNum)
{
	u8 value;
	value=DIO_vSetReadPinValue(copy_u8PortName,copy_u8PinNum);
	return value ;
}

