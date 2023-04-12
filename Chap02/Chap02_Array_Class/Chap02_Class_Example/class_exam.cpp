#include "SmartHome.h"

/*
Rectangle r1(4, 6);
printf("rectangle 1 Area : %1f \n", r1.getArea());                           
std::cout << "rectangle 1 Area : " << r1.getArea() << std::endl;              
std::cout << "rectangle 1 Square : " << r1.isSquare() << std::endl;
*/

int main()
{
	SmartHome MyHome("ȫ�浿", 23, 50, true);
	MyHome.printStatus();
}