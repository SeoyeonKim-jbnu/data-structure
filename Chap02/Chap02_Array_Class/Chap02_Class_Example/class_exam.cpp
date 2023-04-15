<<<<<<< HEAD
#include "SmartHome.h"

/*
Rectangle r1(4, 6);
printf("rectangle 1 Area : %1f \n", r1.getArea());                           
std::cout << "rectangle 1 Area : " << r1.getArea() << std::endl;              
std::cout << "rectangle 1 Square : " << r1.isSquare() << std::endl;
*/

int main()
{
	SmartHome MyHome("홍길동", 23, 50, true);
	MyHome.printStatus();
}
=======
#include "smartHome.h"

int main()
{
	/*
	Rectangle r1(4, 6);
	printf("rectangle 1 Area : %1f \n", r1.getArea());                           //printf 사용
	std::cout << "rectangle 1 Area : " << r1.getArea() << std::endl;              // iostream의 cout 사용
	std::cout << "rectangle 1 Square : " << r1.isSquare() << std::endl;

	*/

	SmartHome MyHome("홍길동", 23, 50, true);
	MyHome.printStatus();
	
}

>>>>>>> 83b76102bb8e28e104d6beb495b669aeec8625db
