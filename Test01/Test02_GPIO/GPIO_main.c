///*
 //* Test02_GPIO.c
 //*
 //* Created: 2024-10-10 오전 9:36:00
 //* Author : user
 //*/ 
//#define F_CPU 16000000UL
//#define __DELAY_BACKWARD_COMPATIBLE__
//
//#include <avr/io.h>
//#include <avr/delay.h>
//
//#define SW1 PORTG0
//#define SW2 PORTG1
//#define SW3 PORTG2
//#define LED1 PORTG4
//#define _BV(bit) (1<<(bit))
//
//
//dd
//
//
//int main(void)
//{
	//DDRG &= ~0x0c;
	//DDRG |= 0x03;
	//
	//PORTG |= _BV(LED1);
	//StandBY();
	//PORTG &= ~_BV(LED1);
	//
	//EIMSK |= 0x03;
	//EICRA |= 0x0F;
	//
	//while(1)
	//{
		//
		//
	//}
	//
	//
	//
	//
	//
	//
	//int ival = 1000;
    ///* Replace with your application code */
	//DDRG = 0x10; // G PORT 하위 4비트 : 입력, 상위 1bit : 출력
	//
	///*DDRG = |=0x10; // 0b xxx1 xxxx
	//DDRG &= ~0x07; // 0b xxxx x000 ==> xxxx x111(~_*/
	//
	//PORTG |= _BV(LED1);
	//PORTG |= 0x07;
	//StandBY();
	//
   //
	//while(1)
	//{
		//if((PING & _BV(SW2)) == 0) ival +=500;
		//else if((PING & _BV(SW3)) == 0)
		//{
			//ival -=500;
			//if(ival < 10) ival = 100;
		//}
		//PORTG |= _BV(ival);
		//_delay_us(ival);
		//PORTG &= ~_BV(ival);
		//_delay_us(ival);
	//}
	//
	//
//}
	//