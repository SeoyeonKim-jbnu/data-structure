#include "polynomial.h"
#include "birthday.h"

void swap(int& x, int& y)   //&는 주소값 의미, &없으면 값이 안 바뀜
{
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
}



int main() {
/*
	Polynomial a, b, c;

	a.read();
	b.read();
	c.add(a, b);

	a.display("A = ");
	b.display("B = ");
	c.display("C = A + B = ");

	// 71p. 객체 배열
	Student eei[10];      // 객체 배열
	strcpy(eei[2].name, "Seoyeon Kim");
	eei[2].bDay.month = 6;
	eei[2].bDay.date = 28;
	printf("이름은 : %s, %d월 %d일 생입니다. \n", eei[2].name, eei[2].bDay.month, eei[2].bDay.date);

*/

	// 72p. 참조형 또는 레퍼런스형
	int a = 1, b = 2;
	printf("a = %d, b = %d \n", a, b);
	swap(a, b);
	printf("swap 호출 후 , a = %d, b = %d \n", a, b);

	return 0;
}