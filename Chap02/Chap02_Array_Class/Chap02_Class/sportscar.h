#pragma once
#include "Car.h"

class SportsCar : public Car             //car class 상속을 받아 만듦
{
public:
	bool bTurbo;
	SportsCar() {}  //생성자
	~SportsCar() {}  //소멸자
	void setTurbo(bool bTur) {
		bTurbo = bTur;
	}
	void speedUp() {              //overloading
		if (bTurbo)
			speed += 20;    //Turbo모드일때만 속도 20 증가
		else
			Car::speedUp(); // 터보모드가 아니면 Car 클래스의 speed 함수
	}




};