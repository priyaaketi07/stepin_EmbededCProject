#ifndef ACTIVITY2_H_INCLUDED
#define ACTIVITY2_H_INCLUDED
#include <avr/io.h>
#include <util/delay.h>

//#include"activity2.h"
void Initadc();
uint16_t Readadc(uint8_t s);
uint16_t activity2_adc(void);


#endif // ACTIVITY2_H_INCLUDED
