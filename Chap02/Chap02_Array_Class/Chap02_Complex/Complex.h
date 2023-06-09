#pragma once
#include <cstdio>

class Complex
{
private:
	double real;
	double imag;
public:
	void set(double real, double imag) {
		this->real = real;
		this->imag = imag;
	}
	void read(const char* msg = "복소수 = ") {
		printf("%s", msg);
		scanf("%1f%1f", &real, &imag);
	}
	void print(const char* msg = " 복소수 = ") {
		printf("%s %4.2f + %4.2fi\n", msg, real, imag);
	}
	void add(Complex a, Complex b) {
		real = a.real + b.real;
		imag = a.imag + b.imag;
	}
};