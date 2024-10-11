//#define F_CPU 16000000UL
//#include <avr/io.h>
//#include <util/delay.h>
//
//// LED Port : PG4
//
//int CheckG1()
//{
	//char v = PING & 0x02; // G1 핀을 확인 (동작 모드 전환)
	//if (v == 0) return 1;
	//return 0;
//}
//
//int CheckG2()
//{
	//char v = PING & 0x04; // G2 핀을 확인 (속도 변경)
	//if (v == 0) return 1;
	//return 0;
//}
//
//int main(void)
//{
	//DDRG |= 0x10;       // PG4 핀을 출력 모드로 설정 (LED 제어)
	//DDRG &= ~(0x06);    // PG1, PG2 핀을 입력 모드로 설정 (스위치 입력)
//
	//char mode = 0;      // LED 상태를 저장하는 변수. 초기 상태는 0 (LED 꺼짐)
	//char fast_mode = 0; // 빠르게 점등할지 여부를 결정하는 변수
//
	//// 첫 번째 스위치 G1이 눌리기를 기다림
	//while (1)
	//{
		//if (CheckG1() == 1)
		//{
			//mode = 1;
			//break; // 첫 번째 루프 종료
		//}
	//}
//
	//// 메인 루프
	//while (1)
	//{
		//// 스위치 G1이 눌렸을 때 mode 값을 토글
		//if (CheckG1())
		//{
			//if (mode == 0)
			//mode = 1;
			//else
			//mode = 0;
			//_delay_ms(200); // 디바운싱 처리
		//}
//
		//// 스위치 G2가 눌렸을 때 fast_mode 값을 토글
		//if (CheckG2())
		//{
			//if (fast_mode == 0)
			//fast_mode = 1;
			//else
			//fast_mode = 0;
			//_delay_ms(200); // 디바운싱 처리
		//}
//
		//// LED 상태 제어
		//if (mode == 1)
		//{
			//PORTG |= 0x10; // PG4 핀을 HIGH로 설정 (LED 켜기)
//
			//// fast_mode에 따라 점등 속도 변경
			//if (fast_mode == 1)
			//_delay_ms(200); // 빠르게 점등 (200ms)
			//else
			//_delay_ms(1000); // 기본 점등 속도 (1000ms)
//
			//PORTG &= ~(0x10); // PG4 핀을 LOW로 설정 (LED 끄기)
		//}
//
		//// fast_mode에 따른 꺼짐 속도 변경
		//if (fast_mode == 1)
		//_delay_ms(100); // 빠른 꺼짐 속도 (100ms)
		//else
		//_delay_ms(500); // 기본 꺼짐 속도 (500ms)
	//}
//}