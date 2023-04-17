#include "birthday.h"

int main()
{
	Student eei[10];      // 객체 배열
	strcpy(eei[2].name, "Seoyeon Kim");
	eei[2].bDay.month = 6;
	eei[2].bDay.date = 28;
	printf("이름은 : %s, %d월 %d일 생입니다. \n", eei[2].name, eei[2].bDay.month, eei[2].bDay.date);
}