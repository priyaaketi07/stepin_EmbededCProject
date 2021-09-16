#ifndef ACTIVITY4_H_INCLUDED
#define ACTIVITY4_H_INCLUDED
#define F_CPU 16000000UL /**< Clock Frequency of MCU is 16 MHz */
#define USART_BAUDRATE 9600 /**< Baud rate for serial communication  */
#define UBRR_VALUE (((F_CPU / (USART_BAUDRATE * 16UL))) - 1) /**< Formula to calculate UBRR value */

#include <util/delay.h>
#include <avr/io.h>



void USARTInit();


int USARTRead();

void activity4_USARTWrite(uint16_t temparature);


#endif // ACTIVITY4_H_INCLUDED
