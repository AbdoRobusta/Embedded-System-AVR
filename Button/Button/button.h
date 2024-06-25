/*
 * button.h
 *
 * Created: 2/10/2018 7:32:46 PM
 *  Author: abdo_essam_aboziad
 */ 

#include "DIO.h"
#ifndef BUTTON_H_
#define BUTTON_H_

void Button_vInit(u8 copy_u8PortName,u8 copy_u8PinNum);

u8 Button_u8ReadValue(u8 copy_u8PortName,u8 copy_u8PinNum);

#endif /* BUTTON_H_ */