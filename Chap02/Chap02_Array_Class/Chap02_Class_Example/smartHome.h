#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class SmartHome {
private:
	string owner; //������ �̸�
	int temperature;
	int humidity;
	bool security;  //���� �ý��� ���� (true : �۵���, false : ��Ȱ��)

public:
	SmartHome(string owner, int temperature, int humidity, bool security) {
		this->owner = owner; //�ʱ�ȭ ��Ű�� ���
		this->temperature = temperature;
		this->humidity = humidity;
		this->security = security;
	}

	void setTemperature(int temperature) {
		this->temperature = temperature;
	}

	void sethumidity() {
		this->humidity = humidity;
	}
	
	void setsecurity() {
		this->security = security;
	}

	int getTemparature() {
		return this->temperature;
	}

	int gethumidity() {
		return this->humidity;
	}

	bool getsecurity() {
		return this->security;
	}

	void printStatus() {
		cout << "������ : " << owner << endl ;
		cout << "�µ� : " << temperature << "��" << endl;
		cout << "���� : " << humidity << "%" << endl;
		if (security) {
			cout << "���� �ý��� �۵���" << endl;
		}

	}

};


/*
SmartHome (string o, int t, int h, bool s){
	owner = o;
	temperature = t;
	humidity = h;
	security = s;
}  �ʱ�ȭ��� #2
*/