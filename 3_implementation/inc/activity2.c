#include <avr/io.h>
#include"activity2.h"
#include"activity1.h"
void Initadc()
{
    ADMUX=(1<<REFS0);
    ADCSRA=(1<<ADEN)|(7<<ADPS0);
}

uint16_t Readadc(uint8_t s)
{
    ADMUX=0xf8;
    s=s&0b00000111;
    ADMUX|=s;

    ADCSRA|=(1<<ADSC);
    while(!(ADCSRA & (1<<ADIF)));
    ADCSRA|=(1<<ADIF);
    return(ADC);

}

uint16_t activity2_adc(void)
{

    uint16_t temparature;
    temparature=Readadc(0);
    return temparature;

}
