#include "sportscar.h"     // sportscar.h ��������� include (��������� include ���� ��� ����)

int main()
{
	//Car yourCar;    //yourCar ��ü ����, ������ �Լ� ����
	Car yourCar(80, 4, "yourCar");
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