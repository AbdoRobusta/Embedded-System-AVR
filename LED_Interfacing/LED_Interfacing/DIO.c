/*
 * DIO.c
 *
 * Created: 11/3/2023 12:52:43 PM
 *  Author: abdo_essam_aboziad
 */ 
#include "DIO.h"


void DIO_vSetPinDirection (u8 copy_u8PortName, u8 copy_u8PinNum, u8 copy_u8PinDirection){
	switch (copy_u8PortName)
	{
		case 'A' :
		case 'a' :
		WRITE_BIT(DDRA,copy_u8PinNum,copy_u8PinDirection);
		break;
		case 'B':
		case 'b' :
			WRITE_BIT(DDRB,copy_u8PinNum,copy_u8PinDirection);
		break;
		case 'C':
		case 'c' :			
		WRITE_BIT(DDRC,copy_u8PinNum,copy_u8PinDirection);
		break;
		case 'D':
		case 'd' :
			WRITE_BIT(DDRD,copy_u8PinNum,copy_u8PinDirection);
		break;
	}
}
void DIO_vSetPinValue(u8 copy_u8PortName , u8 copy_u8PinNumber ,u8 copy_u8PinValue)
{
	switch (copy_u8PortName)
	{
		case 'A':
		case 'a':
		if(copy_u8PinValue == 0)
		CLR_PIN(PORTA,copy_u8PinNumber);
		else
		SET_PIN(PORTA,copy_u8PinNumber);
		//WRITE_BIT(PORTA,copy_u8PinNumber,copy_u8PinValue);
		break;

		case 'B':
		case 'b':
		if(copy_u8PinValue == 0)
		CLR_PIN(PORTB,copy_u8PinNumber);
		else
		SET_PIN(PORTB,copy_u8PinNumber);
		break;

		case 'C':
		case 'c':
		if(copy_u8PinValue == 0)
		CLR_PIN(PORTC,copy_u8PinNumber);
		else
		SET_PIN(PORTC,copy_u8PinNumber);
		break;

		case 'D':
		case 'd':
		if(copy_u8PinValue == 0)
		CLR_PIN(PORTD,copy_u8PinNumber);
		else
		SET_PIN(PORTD,copy_u8PinNumber);
		break;
	}
}

u8 DIO_vSetReadPinValue(u8 copy_u8PortName ,u8 copy_u8PinNumber)
{
	unsigned char return_value=0;
	switch(copy_u8PortName )
	{
		case 'A' :
		case 'a' :
		return_value=READ_PIN(PINA,copy_u8PinNumber);//Read the value from the given pin in port A
		break;
		
		case 'B' :
		case 'b' :
		return_value=READ_PIN(PINB,copy_u8PinNumber);//Read the value from the given pin in port B
		break;
		
		case 'C' :
		case 'c' :
		return_value=READ_PIN(PINC,copy_u8PinNumber);//Read the value from the given pin in port C
		break;
		
		case 'D' :
		case 'd' :
		return_value=READ_PIN(PIND,copy_u8PinNumber);//Read the value from the given pin in port D
		break;
		
		default:
		break;
	}
	return return_value ;
}

void DIO_vSetPortDirection (u8 copy_u8PortName, u8 copy_u8PortDirection){
	switch (copy_u8PortName)
	{
		case 'A' :
		case 'a' :
		WRITE_PORT(DDRA,copy_u8PortDirection);
		break;
		case 'B':
		case 'b' :	
		WRITE_PORT(DDRB,copy_u8PortDirection);
		break;
		case 'C':
		case 'c' :
		WRITE_PORT(DDRC,copy_u8PortDirection);
		break;
		case 'D':
		case 'd' :
		WRITE_PORT(DDRD,copy_u8PortDirection);
		break;
	}
}

void DIO_vSetPortValue(u8 copy_u8PortName, u8 copy_u8PortValue){
	switch (copy_u8PortName)
	{
		case 'A' :
		case 'a' :
		WRITE_PORT(PORTA,copy_u8PortValue);
		break;

		case 'B':
		case 'b' :
		WRITE_PORT(PORTB,copy_u8PortValue);
		break;
		
		case 'C':
		case 'c' :
		WRITE_PORT(PORTC,copy_u8PortValue);
		break;
		
		case 'D':
		case 'd' :
		WRITE_PORT(PORTD,copy_u8PortValue);
		break;
	}
}
u8 DIO_vSetReadPortValue(u8 copy_u8PortName)
{
	u8 value=0;
	switch(copy_u8PortName)
	{
		case 'A' :
		case 'a' :
		value=PINA; // read the value of port A
		break ;
		case 'B' :
		case 'b' :
		value=PINB; // read the value of port B
		break ;
		case 'C' :
		case 'c' :
		value=PINC; // read the value of port C
		break ;
		case 'D' :
		case 'd' :
		value=PIND; // read the value of port D
		break ;
		default:
		break ;
	}
	return value;
}
void DIO_vSetPortDirec_Binary (u8 copy_u8PortName, u8 copy_u8PortDirection){
	switch (copy_u8PortName)
	{
		case 'A' :
		case 'a' :
		DDRA = copy_u8PortDirection;
		break;
		case 'B':
		case 'b' :
		DDRB = copy_u8PortDirection;
		break;
		case 'C':
		case 'c' :
		DDRC = copy_u8PortDirection;
		break;
		case 'D':
		case 'd' :
		DDRD = copy_u8PortDirection;
		break;
	}
}
void DIO_vtogglePin(u8 copy_u8PortName,u8 copy_u8PinNum)
{
	switch(copy_u8PortName)
	{
		case 'A':
		case 'a':
		TOGGLE_PIN(PORTA,copy_u8PinNum);//Toggle the value of the given pin in port A
		break;
		case 'B':
		case 'b':
		TOGGLE_PIN(PORTB,copy_u8PinNum);//Toggle the value of the given pin in port B
		break;
		case 'C':
		case 'c':
		TOGGLE_PIN(PORTC,copy_u8PinNum);//Toggle the value of the given pin in port C
		break;
		case 'D':
		case 'd':
		TOGGLE_PIN(PORTD,copy_u8PinNum);//Toggle the value of the given pin in port D
		break;
		default: break;
	}
}

void DIO_vConnectPullUp(u8 copy_u8PortName ,u8 copy_u8PinNum, u8 connect_pullup)
{
	switch(copy_u8PortName)
	{
		case 'A' :
		case 'a' :
		if(connect_pullup==1)
		{
			SET_PIN(PORTA,copy_u8PinNum);
		}
		else
		{
			CLR_PIN(PORTA,copy_u8PinNum);
		}
		break;
		case 'B' :
		case 'b' :
		if(connect_pullup==1)
		{
			SET_PIN(PORTB,copy_u8PinNum);
		}
		else
		{
			CLR_PIN(PORTB,copy_u8PinNum);
		}
		break;
		case 'C' :
		case 'c' :
		if(connect_pullup==1)
		{
			SET_PIN(PORTC,copy_u8PinNum);
			
		}
		else
		{
			CLR_PIN(PORTC,copy_u8PinNum);
		}
		break;
		case 'D' :
		case 'd' :
		if(connect_pullup==1)
		{
			SET_PIN(PORTD,copy_u8PinNum);
			
		}
		else
		{
			CLR_PIN(PORTD,copy_u8PinNum);
		}
		break;
		
	}
}

void write_low_nibble(u8 portname,u8 value)
{
	value&=0x0f;
	switch(portname)
	{
		case 'A':
		PORTA&=0xf0;
		PORTA|=value;
		case 'B':
		PORTB&=0xf0;
		PORTB|=value;
		case 'C':
		PORTC&=0xf0;
		PORTC|=value;
		case 'D':
		PORTD&=0xf0;
		PORTD|=value;
	}
}

void write_vHighNibble(u8 portname,u8 value)
{
	value<<=4;
	switch(portname)
	{
		case 'A':
		PORTA&=0x0f;
		PORTA|=value;
		case 'B':
		PORTB&=0x0f;
		PORTB|=value;
		case 'C':
		PORTC&=0x0f;
		PORTC|=value;
		case 'D':
		PORTD&=0x0f;
		PORTD|=value;
	}
}

