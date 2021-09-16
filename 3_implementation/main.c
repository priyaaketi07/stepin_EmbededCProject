#include <avr/io.h>
#include <util/delay.h>
#include"activity1.h"
#include"activity2.h"
#include"activity3.h"
#include"activity4.h"

int main(void)
{
    peripherals();
    InitTimer();
    Initadc();
    USARTInit();
    uint16_t temparature;
 while(1)
{

   if(activity1_LED()==1)
   {
    led_on();
    temparature=activity2_adc();
    activity3_PWM(temparature);
    activity4_USARTWrite(temparature);
   }
   else
   {
    led_off();
     _delay_ms(100);
   }


}
return 0;
}
