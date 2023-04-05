#pragma once
#include <cstdio>
#include <cstring>

class Car {
private:                        // 현재 class 내부에서만 접근 가능

protected:                      // 외부 접근은 X, 상속되는 class에서는 접근 가능
	int speed;			// 속력 speed : 멤버변수
	char name[40];		// 이름 name : 멤버변수

public:                         // 외부 접근 가능
	int gear;    // 멤버변수
	Car() : speed(0), gear(0), name("") {}  // 생성자 (Constructor, 인수가 없는 경우), 멤버변수 초기화 
	~Car() {}								// 소멸자
	Car(int s, char* n, int g)              // 생성자 (인수가 있는 경우
		: speed(s), gear(g) {
		strcpy_s(name, n);			   	 // n 문자열을 name에 copy하는 함수
	}

	void changeGear(int g ) {
		gear = g;
	}
	void speedUp() {
		speed += 5;
	}
	void display() {
		printf("[%s]  : 기어=%d단, 속도=%dkmph\n", name, gear, speed);
	}
	void whereAmI() {
		printf("객체 주소 = %x\n", this);     // 주소 this 포인터
	}
};