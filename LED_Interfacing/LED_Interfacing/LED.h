/*
 * LED.h
 *
 * Created: 11/3/2023 1:38:05 PM
 *  Author: abdo_essam_aboziad
 */ 
#include "std_types.h"
#include "DIO.h"

#ifndef LED_H_
#define LED_H_



void Led_vTurnONLed(u8 copy_u8PortName,u8 copy_u8PinNum);
void Led_vTurnOffLed(u8 copy_u8PortName,u8 copy_u8PinNum);


#endif /* LED_H_ */