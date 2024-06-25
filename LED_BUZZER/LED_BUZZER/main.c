/*
 * LED_BUZZER.c
 *
 * Created: 3/29/2024 8:41:00 AM
 * Author : abdo_essam_abozaid
 */ 


#include "DIO.h"
#include "LED.h"
#define F_CPU 8000000UL
#include <util/delay.h>

int main(void)
{
	DIO_vSetPortDirection('a',0x08);   
    while (1) 
    {
		Led_vTurnONLed('a',0);
		_delay_ms(500);
		Led_vTurnOffLed('a',0);
		
		Led_vTurnONLed('a',1);
		_delay_ms(500);
		Led_vTurnOffLed('a',1);
		
		Led_vTurnONLed('a',2);
		_delay_ms(500);
		Led_vTurnOffLed('a',2);
		
		DIO_vSetPinValue('a',3,1);
		_delay_ms(1000);
		DIO_vSetPinValue('a',3,0);
		_delay_ms(1000);
    }
}