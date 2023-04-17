#include "smartHome.h"

int main()
{
	SmartHome myHome("ȫ�浿", 25, 50, true);
	myHome.printStatus();
	myHome.getSecurity();
	myHome.setHumidity(24);
}