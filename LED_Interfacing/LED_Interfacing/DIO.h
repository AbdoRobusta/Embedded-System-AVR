/*
 * DIO.h
 *
 * Created: 11/3/2023 11:49:39 AM
 *  Author: abdo_essam_aboziad
 */


#ifndef DIO_H_
#define DIO_H_
#include "std_types.h"
#include "reg.h"
#include "std_macros.h"

void DIO_vSetPinDirection (u8 copy_u8PortName, u8 copy_u8PinNum, u8 copy_u8PinDirection);
void DIO_vSetPinValue(u8 copy_u8PortName, u8 copy_u8PinNum, u8 copy_u8PinValue);
u8 DIO_vSetReadPinValue(u8 copy_u8PortName ,u8 copy_u8PinNumber);

void DIO_vSetPortDirection (u8 copy_u8PortName, u8 copy_u8PortDirection);
void DIO_vSetPortDirec_Binary (u8 copy_u8PortName, u8 copy_u8PortDirection);
void DIO_vSetPortValue(u8 copy_u8PortName, u8 copy_u8PortValue);
u8 DIO_vSetReadPortValue(u8 copy_u8PortName);

void DIO_vtogglePin(u8 copy_u8PortName,u8 copy_u8PinNum);

void DIO_vConnectPullUp(u8 copy_u8PortName ,u8 copy_u8PinNum, u8 connect_pullup);
void write_low_nibble(u8 portname,u8 value);
void write_vHighNibble(u8 portname,u8 value);





#endif /* DIO_H_ */