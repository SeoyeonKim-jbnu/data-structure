#pragma once
#include <cstdio>
#include <cstring>

class Birthday {
public:
	int month;
	int date;
};
class Student {
public:
	char name[100];
	Birthday bDay;     // 다른 클래스를 멤버 변수로
};
