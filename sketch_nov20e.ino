#define F_CPU160000000UL

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
  DDRB |= (1 << PB0) |(1 << PB1) |(1 << PB2);
  DDRC |= (1 << PC0) |(1 << PC1) |(1 << PC2);
  while (1)
  {
    if
    PORTB|=(1 << PB2);
    PORTB|=(1 << PB0);
    PORTB &= ~(1 << PB1);
  }  
 
    else
    {
    PORTC|=(1<<PC1);
    PORTC & =~(1 << PC0);
    _delay_ms(3000);
     PORTB &= ~((1 << PB0)|(1 << PB1));
     PORTC &= ~((1 << PC0)|(1 << PC1));
    }

    _delay_ms(2000);
    {
      if
    PORTC|=(1 << PC2);
    PORTC|=(1 << PC0);
    PORTc &= ~(1 << PC1);
    }

    else
    {
    PORTB| =(1 << PB1)
    PORT & =~(1 << PB0);

    _delay_ms(3000);
    PORT &= ~((1 << PB0) | (1 << PB1));
    PORT & =~((1 << PC0) | (1 << PC1));
    }

    _delay_ms_(3000);
  }
}