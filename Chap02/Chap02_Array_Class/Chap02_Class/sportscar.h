#pragma once
#include "Car.h"

class SportsCar : public Car             //car class ����� �޾� ����
{
public:
	bool bTurbo;
	SportsCar() {}  //������
	~SportsCar() {}  //�Ҹ���
	void setTurbo(bool bTur) {
		bTurbo = bTur;
	}
	void speedUp() {              //overloading
		if (bTurbo)
			speed += 20;    //Turbo����϶��� �ӵ� 20 ����
		else
			Car::speedUp(); // �ͺ���尡 �ƴϸ� Car Ŭ������ speed �Լ�
	}




};