#include "smartHome.h"

int main()
{
	/*
	Rectangle r1(4, 6);
	printf("rectangle 1 Area : %1f \n", r1.getArea());                           //printf ���
	std::cout << "rectangle 1 Area : " << r1.getArea() << std::endl;              // iostream�� cout ���
	std::cout << "rectangle 1 Square : " << r1.isSquare() << std::endl;

	*/

	SmartHome MyHome("ȫ�浿", 23, 50, true);
	MyHome.printStatus();
	
}

