/*
 * Start_Driver.c
 *
 * Created: 3/4/2024 4:41:09 AM
 * Author : abdo_essam_aboziad
 */ 
#define F_CPU 8000000UL

#include <util/delay.h>

#include "DIO.h"
#include "LED.h"
#include "reg.h"
#include "LED.h"

void Initalize_vPinsDriction();
void Initalize_vPinsValue_High();
void Initalize_vPinsValue_Low();
void Initialize_vTogglePins();
void turn_on_led();
void turn_off_led();

int main(void)
{
    Initalize_vPinsDriction();
	DIO_vSetPortDirec_Binary('b',0x0f);
    while (1) 
    {
		for (s8 i =0; i<=3; i++)
		{
			DIO_vSetPinValue('a',i,1);
			Led_vTurnONLed('c',i);
			DIO_vtogglePin('b',i);
			_delay_ms(100);
		}
		for (s8 i =3; i>=0; i--)
		{
			DIO_vSetPinValue('a',i,0);
			Led_vTurnOffLed('c',i);
			DIO_vtogglePin('b',i);
			_delay_ms(100);
		}	
		
    }
}
void Initalize_vPinsDriction(){
	DIO_vSetPinDirection('a',0,1);
	DIO_vSetPinDirection('a',1,1);
	DIO_vSetPinDirection('a',2,1);
	DIO_vSetPinDirection('a',3,1);
}
void Initalize_vPinsValue_High(){
	DIO_vSetPinValue('a',0,1);
	DIO_vSetPinValue('a',1,1);
	DIO_vSetPinValue('a',2,1);
	DIO_vSetPinValue('a',3,1);
	
}
void Initalize_vPinsValue_Low(){
	DIO_vSetPinValue('a',0,0);
	DIO_vSetPinValue('a',1,0);
	DIO_vSetPinValue('a',2,0);
	DIO_vSetPinValue('a',3,0);

}
void Initialize_vTogglePins(){
	DIO_vtogglePin('b',0);
	DIO_vtogglePin('b',1);
	DIO_vtogglePin('b',2);
	DIO_vtogglePin('b',3);

}
void turn_on_led(){
	Led_vTurnONLed('c',0);
	Led_vTurnONLed('c',1);
	Led_vTurnONLed('c',2);
	Led_vTurnONLed('c',3);

}
void turn_off_led(){
	Led_vTurnOffLed('c',0);
	Led_vTurnOffLed('c',1);
	Led_vTurnOffLed('c',2);
	Led_vTurnOffLed('c',3);

}