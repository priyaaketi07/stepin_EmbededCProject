#include <avr/io.h>
#include"activity1.h"
void peripherals(void)
{
    DDRB |=(1<<PB0);
    DDRD &=~(1<<PD0);
    PORTD |=(1<<PB0);
    DDRD &=~(1<<PD4);
    PORTD |=(1<<PD4);
}
void led_on()
{
    PORTB |=(1<<PB0);
}

void led_off()
{
    PORTB &=~(1<<PB0);
}

int act1=0;
int activity1_LED(void)
{
    peripherals();
    if(!(PIND&(1<<PD0))&& !(PIND&(1<<PD4)))
    {
        led_on();
        //act1=1;
    }
    else
    {
        led_off();
        //act1=0;
    }
    return act1;
}
