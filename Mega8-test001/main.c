/*
 * Mega8-test001.c
 *
 * Created: 24.10.2016 21:37:31
 * Author : min
 */ 

#define F_CPU 8000000L
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRD = 0xFF;
	PORTD = 0b00000000;
	while (1)
	{
		PORTD |= (1<<(PORTD0));
		_delay_ms(1500);
		PORTD &= ~(1<<(PORTD0));
		_delay_ms(500);
	}
}
