/*
 * board.h
 *
 * Created: 3/4/2014 12:50:57 PM
 *  Author: Drobisch
 */ 


#ifndef BOARD_H_
#define BOARD_H_


// External oscillator frequency
#define BOARD_XOSC_HZ          16000000
// External oscillator type.
#define BOARD_XOSC_TYPE        XOSC_TYPE_EXTERNAL
// External oscillator startup time
#define BOARD_XOSC_STARTUP_US  500000


#define LED0_GPIO                       IOPORT_CREATE_PIN(PORTB, 2)
#define LED1_GPIO                       IOPORT_CREATE_PIN(PORTB, 3)
#define LED0                            LED0_GPIO
#define LED1                            LED1_GPIO
#define LED_COUNT                       2


#endif /* BOARD_H_ */