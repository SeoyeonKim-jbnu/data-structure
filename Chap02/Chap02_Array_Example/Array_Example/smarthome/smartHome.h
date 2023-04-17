#pragma once
#include <iostream>
#include <string>
using namespace std;

class SmartHome {
private:
	string owner;
	int temperature;
	int humidity;
	bool security;
public:
	SmartHome(string owner, int temperature, int humidity, bool security) {
		this->owner = owner;
		this->temperature = temperature;
		this->humidity = humidity;
		this->security = security;
	}

	void setTemperature(int temperature) {
		this->temperature = temperature;
	}

	void setHumidity(int humidity) {
		this->humidity = humidity;
	}

	void setSecurity(bool security) {
		this->security = security;
	}

	int getTemperature() {
		return this->temperature;
	}

	int setHumidity() {
		return this->humidity;
	}

	bool getSecurity() {
		return this->security;
	}

	void printStatus() {
		printf("집주인 : %s\n", owner);
		printf("온도 : %d\n", temperature);
		printf("습도 : %d\n", humidity);
		if (security) {
			printf("보안 시스템 작동중");
		}
	}


};