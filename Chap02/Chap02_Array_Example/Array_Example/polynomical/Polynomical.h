#pragma once
#include <cstdio>
#include <cstring> // 문자열 함수
#include <vector>  // STL vector 라이브러리
#include <iostream> // input output stream
using namespace std;

#define MAX_DEGREE 100


class PolynomialV {
	// std::vector <float> coef; -> using namespace std를 했기때문에 std 피료없음
	vector <float> coef;
public:
	int degree() {
		return coef.size();     //coef vector의 크기변환
	}
	void read() {
		int deg;
		float value;

		printf(" 다항식의 최고 차수를 입력하시오. : ");
		scanf("%d", &deg);                //degree에 키보드 입력값 넣기
		printf(" 각 항의 계수를 입력하시오. (총 %d개) : ", deg + 1);
		for (int i = 0; i <= deg; i++)
		{
			scanf("%f", &value);   //value 변수에 저장
			coef.push_back(value); //push_back : vector 안에 있는 함수
		}
	}

};

class Polynomial {
	int degree;                      // 다항식의 최고차수
	float coef[MAX_DEGREE];         // 각 항에 대한 계수 (Codfficient)

public:
	// 생성자 (Constructor)
	Polynomial() {
		degree = 0;                 // degree 0으로 초기화
		coef[0] = 0.0f;             // coef 배열의 0번째 0.0f로 초기화
	}
	// Polynomial (): degree(0)

	void read() {
		printf(" 다항식의 최고 차수를 입력하시오. : ");
		scanf("%d", &degree);                //degree에 키보드 입력값 넣기
		printf(" 각 항의 계수를 입력하시오. (총 %d개) : ", degree + 1);
		for (int i = 0; i <= degree; i++)
			scanf("%f", coef + i);
	}
	void display(const char* str = " Poly = ") {
		printf("\t%s", str);
		for (int i = 0; i < degree; i++)
			printf(" %5.1f x^%d + ", coef[i], degree - i);
		printf(" %4.1f\n", coef[degree]);
	}
	void add(Polynomial a, Polynomial b) {
		if (a.degree > b.degree) {
			*this = a;
			for (int i = 0; i <= b.degree; i++)
				coef[i + (degree - b.degree)] += b.coef[i];
		}
		else {
			*this = b;
			for (int i = 0; i <= a.degree; i++)
				coef[i + (degree - a.degree)] += a.coef[i];
		}
	}
	bool isZero() {
		return degree == 0;
	}
	void negate() {
		for (int i = 0; i < degree; i++)
			coef[i] = -coef[i];
	}
};

