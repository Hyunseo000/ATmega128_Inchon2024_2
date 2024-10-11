d/*
 * Test03_Timer.c
 *
 * Created: 2024-10-11 오후 2:32:38
 * Author : user
 */ 

#define _BV(bit) (1<<(bit))
#include <avr/interrupt.h>

#include <avr/io.h>
#define DDR DDRG
#define LED PORTG1
#define PORT PORTG1
int cnt = 0, st = 0;

ISR(TIMER0_OVF_vect)
{
	cnt ++;
	if(cnt > 10) 
	{
		cnt = 0;
		if(st)
		{ PORT &= ~_BV(LED); }
		else
		{
		PORT |= _BV(LED);
		}
	}
}


int main(void)
{
	DDR |= _BV(LED);
	PORT |= _BV(LED);
	StandBY();
	PORTG &= ~_BV(LED);
	
	TIMSK |= 0x01;
	TCCR0 |= 0x07;
	sei();
	
	
    /* Replace with your application code */
    while (1) 
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	


