define F_CPU16000000UL

#include<avr.h>
#include<util/delay.h>

int main(void)
{
  DDRC |= (1 << PC0)
  while(1)
  {
    PORTC | = (1 << PC5)
    _delay_ms(500);

    PORTC & =~ (1 << PC5);
    _delay_ms(500);
  }
  return0;
}
