#define F_CPU160000000UL

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
  DDRB |= (1 << PB0) |(1 << PB1) |(1 << PB2);

  while (1)
  {
    PORTB|=(1 << PB2);
    PORTB|=(1 << PB0);
    PORTB &= ~(1 << PB1);

    _delay_ms(3000);
     PORTB &= ~((1 << PB0)|(1 << PB1));

    _delay_ms(2000);
    PORTB| =(1 << PB1)
    PORT & =~(1 << PB0);

    _delay_ms(3000);
    PORT &= ~((1 << PB0) | (1 << PB1));

    _delay_ms_(3000);
  }
}