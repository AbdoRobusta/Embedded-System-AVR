/*
 * LED.c
 *
 * Created: 11/3/2023 1:38:23 PM
 *  Author: abdo_essam_aboziad
 */ 
#include "std_types.h"
#include "LED.h"

void Led_vTurnONLed(u8 copy_u8PortName,u8 copy_u8PinNum){
	DIO_vSetPinDirection(copy_u8PortName,copy_u8PinNum,1);
	DIO_vSetPinValue(copy_u8PortName,copy_u8PinNum,1);
}
void Led_vTurnOffLed(u8 copy_u8PortName,u8 copy_u8PinNum){
	DIO_vSetPinDirection(copy_u8PortName,copy_u8PinNum,1);
	DIO_vSetPinValue(copy_u8PortName,copy_u8PinNum,0);
}