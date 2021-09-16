#include<avr/io.h>
#include<util/delay.h>
#include "activity3.h"
#include "activity2.h"

void InitTimer()
{
    TCCR1A |= (1<<COM1A1)|(1<<WGM11)|(1<<WGM10);
    TCCR1B |= (1<<WGM12)|(1<<CS11)|(1<<CS10);
    DDRB |=(1<<PB1);
}

void activity3_PWM(uint16_t temparature)
{

    if(temparature>=0 && temparature<=200){
            OCR1A = temparature;
            _delay_ms(200);
        }
        else if(temparature>=210 && temparature<=500){
             OCR1A = temparature;
            _delay_ms(200);
        }
        else if(temparature>=510 && temparature<=700){
             OCR1A = temparature;
            _delay_ms(200);
        }
        else if(temparature>=710 && temparature<=1024){
             OCR1A =temparature;
            _delay_ms(200);
        }
        else{
            OCR1A=0;
            _delay_ms(200);
        }

}
