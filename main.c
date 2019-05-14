/*
 * p1.c
 *
 * Created: 09-May-19 2:16:21 PM
 * Author : admini
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    DDRB = 0XFF;
    while (1) 
    {
		PORTB = 0XFF;
		_delay_ms(50000);
		PORTB = 0X00;
		_delay_ms(50000);
    }
}

