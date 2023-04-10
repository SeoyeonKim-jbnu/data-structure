#include "sportscar.h"     // sportscar.h 헤더파일을 include (헤더파일의 include 까지 사용 가능)

int main()
{
	//Car yourCar;    //yourCar 객체 생성, 생성자 함수 실행
	Car yourCar(80, 4, "yourCar");
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