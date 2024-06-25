/*
 * reg.h
 *
 * Created: 11/3/2023 1:04:22 PM
 *  Author: abdo_essam_aboziad
 */ 


#ifndef REG_H_
#define REG_H_

#define DDRA    (*(volatile u8*)0x3A)
#define PORTA   (*(volatile u8*)0x3B)
#define PINA    (*(volatile u8*)0x39)

#define DDRB    (*(volatile u8*)0x37)
#define PORTB   (*(volatile u8*)0x38)
#define PINB    (*(volatile u8*)0x36)

#define DDRC    (*(volatile u8*)0x34)
#define PORTC   (*(volatile u8*)0x35)
#define PINC    (*(volatile u8*)0x33)

#define DDRD    (*(volatile u8*)0x31)
#define PORTD   (*(volatile u8*)0x32)
#define PIND    (*(volatile u8*)0x30)

#define MCUCR   (*(volatile u8*)0x55)
#define MCUCSR  (*(volatile u8*)0x54)
#define GICR    (*(volatile u8*)0x5B)
#define GIFR    (*(volatile u8*)0x5A)
#define SREG    (*(volatile u8*)0x5F)

#define UDR     (*(volatile u8*)0x2C)
#define UCSRA   (*(volatile u8*)0x2B)
#define UCSRB   (*(volatile u8*)0x2A)
#define UCSRC   (*(volatile u8*)0x40)
#define UBRRL   (*(volatile u8*)0x29)
#define UBRRH   (*(volatile u8*)0x40)

#define SPDR (*(volatile u8*) (0x2F))
#define SPSR (*(volatile u8*) (0x2E))
#define SPCR (*(volatile u8*) (0x2D))

#define TWBR (*(volatile u8*) (0x20))
#define TWSR (*(volatile u8*) (0x21))
#define TWAR (*(volatile u8*) (0x22))
#define TWDR (*(volatile u8*) (0x23))
#define TWCR (*(volatile u8*) (0x56))

#endif /* REG_H_ */