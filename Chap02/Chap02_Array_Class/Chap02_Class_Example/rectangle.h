#pragma once
#include <iostream>

class Rectangle {
private:
	double width;
	double height;

public:
	Rectangle(double w, double h) {
		width = w;
		height = h;
	}

	double getArea() {
		return width * height;
	}
	
	double petPerimeter() {
		return 2 * (width + height);
	}

	bool isSquare() {
		return (width == height);   // ������ true ��ȯ �ٸ��� false ��ȯ
	}

	
};