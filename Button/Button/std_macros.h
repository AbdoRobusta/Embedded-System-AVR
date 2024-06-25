/*
 * std_macros.h
 *
 * Created: 2/17/2018 3:37:09 PM
 *  Author: abdo_essam_aboziad
 */

#define SET_PIN(reg, pin_no)             reg |=(1 << pin_no)
#define CLR_PIN(reg, pin_no)             reg &=(~(1 << pin_no))
#define TOGGLE_PIN(reg,pin_no)           reg ^=(1 << pin_no)
#define WRITE_BIT(reg, pin_no, value)    reg |=(value << pin_no)
#define READ_PIN(reg,pin_no)             (reg&(1 << pin_no)) >> pin_no
#define WRITE_PORT(reg, value)           (reg=value)

#define READ_PIN(reg,pin_no)             (reg&(1 << pin_no)) >> pin_no

#define IS_PIN_CLR(reg,pin_no)              !((reg&(1<<pin_no))>>pin_no)