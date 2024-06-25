/*
 * Button.c
 *
 * Created: 3/12/2024 2:51:35 AM
 * Author : abdo_essam_abozaid
 */ 
#include "LED.h"
#include "button.h"


int main(void)
{
    Button_vInit('d',0);
	u8 value;
    while (1) 
    {
		value = Button_u8ReadValue('d',0);
		if (value == 1)
		{
			Led_vTurnONLed('a',0);
		}
		else
		{
			Led_vTurnOFFLed('a',0);
		}
    }
}

