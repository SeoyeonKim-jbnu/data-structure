#include "sportscar.h"     // sportscar.h ��������� include (��������� include ���� ��� ����)

int main()
{
	Car yourCar;    //yourCar ��ü ����
	//Car myCar(80, "myCar" 4);
	yourCar.display();
	yourCar.whereAmI();
	yourCar.gear = 5;
	yourCar.display();
	yourCar.changeGear(3);
	yourCar.display();

	SportsCar myCar;
	myCar.setTurbo(true); //turbo���
	myCar.speedUp();
	myCar.display();
	myCar.whereAmI();

	return 0;
}