#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class SmartHome {
private:
	string owner; //집주인 이름
	int temperature;
	int humidity;
	bool security;  //보안 시스템 상태 (true : 작동중, false : 비활성)

public:
	SmartHome(string owner, int temperature, int humidity, bool security) {
		this->owner = owner; //초기화 시키는 방법
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
		cout << "집주인 : " << owner << endl;
		cout << "온도 : " << temperature << "도" << endl;
		cout << "습도 : " << humidity << "%" << endl;
		if (security) {
			cout << "보안 시스템 작동중" << endl;
		}

	}

};


/*
SmartHome (string o, int t, int h, bool s){
	owner = o;
	temperature = t;
	humidity = h;
	security = s;
}  초기화방법 #2
*/