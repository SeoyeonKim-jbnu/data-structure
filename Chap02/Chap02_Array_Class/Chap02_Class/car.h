#pragma once
#include <cstdio>
#include <cstring>

class Car {
private:                        // ���� class ���ο����� ���� ����

protected:                      // �ܺ� ������ X, ��ӵǴ� class������ ���� ����
	int speed;			// �ӷ� speed : �������
	char name[40];		// �̸� name : �������

public:                         // �ܺ� ���� ����
	int gear;    // �������
	Car() : speed(0), gear(0), name("") {}  // ������ (Constructor, �μ��� ���� ���), ������� �ʱ�ȭ 
	~Car() {}								// �Ҹ���
	Car(int s, int g, const char* n)              // ������ (�μ��� �ִ� ���
		: speed(s), gear(g) {
		strcpy_s(name, n);			   	 // n ���ڿ��� name�� copy�ϴ� �Լ�
	}

	void changeGear(int g ) {
		gear = g;
	}
	void speedUp() {
		speed += 5;
	}
	void display() {
		printf("[%s]  : ���=%d��, �ӵ�=%dkmph\n", name, gear, speed);
	}
	void whereAmI() {
		printf("��ü �ּ� = %x\n", this);     // �ּ� this ������
	}
};