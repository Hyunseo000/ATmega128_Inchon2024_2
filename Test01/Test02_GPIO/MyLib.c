///*
 //* common.c
 //*
 //* Created: 2024-10-11 오후 2:37:55
 //*  Author: user
 //*/ 
//#include <avr/io.h>
//
//int TestBit(char pin, char mask)
//{
	//if((pin & mask) != 0 ) return 1;
	//return 0;
//}
//
//
//
//void StandBY(){ // PG4 pin으로 프로그램 시작 스위치 연결
	//DDRG &= ~0x10;
	//PORTG |= 0x10;
	//
	//while(!TestBit(PING, 0x10));
	//while(TestBit(PING, 0x10));
	//
	//while((PING & 0x01) == 0);
	//while (1)
	//{
		//if ((PING & 0x01) == 0 )
		//{
			//PORTG = ~_BV(LED1);
			//break;
		//}
	//}
//}
