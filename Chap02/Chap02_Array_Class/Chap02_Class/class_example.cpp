#include "sportscar.h"     // sportscar.h 헤더파일을 include (헤더파일의 include 까지 사용 가능)

int main()
{
	Car yourCar;    //yourCar 객체 생성
	//Car myCar(80, "myCar" 4);
	yourCar.display();
	yourCar.whereAmI();
	yourCar.gear = 5;
	yourCar.display();
	yourCar.changeGear(3);
	yourCar.display();

	SportsCar myCar;
	myCar.setTurbo(true); //turbo모드
	myCar.speedUp();
	myCar.display();
	myCar.whereAmI();

	return 0;
}