/*
 * charlieplexing avr.c
 *
 * Created: 6/10/2024 3:54:55 PM
 * Author : Hp
 */ 

// avr code based on atmeg328p mcu
#define F_CPU 20000000L
#include <avr/io.h>
#include <avr/delay.h>


int wait = 200;

int main(void)
{
    
    while (1) 
    {
		DDRB = 0x06;
		PORTB = 0x02;
		_delay_ms(200);
		PORTB = 0x04;
		
		_delay_ms(200);
		
		DDRB = 0x05;
		PORTB = 0x01;
		_delay_ms(200);
		PORTB = 0x04;
		
		_delay_ms(200);
		
		DDRB = 0x03;
		PORTB = 0x01;
		_delay_ms(200);
		PORTB = 0x02;
		_delay_ms(200);
    }
}


