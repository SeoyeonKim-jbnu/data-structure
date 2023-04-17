#pragma once
#include <cstdio>

class Rectangle {
private:
	double height;
	double width;
public:
	Rectangle(double w, double h) {
		width = w;
		height = h;
	}

	double getArea() {
		return width * height;
	}

	double getPerimeter() {
		return 2 * (width + height);
	}

	bool isSquare() {
		return (width == height);
	}
};