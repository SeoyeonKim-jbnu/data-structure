#pragma once
#include <cstdio>
// #include <cstring> // ���ڿ� �Լ�
#include <vector>  // STL vector ���̺귯��
// #include <iostream> // input output stream
using namespace std;

#define MAX_DEGREE 100


class PolynomialV {
	// std::vector <float> coef; -> using namespace std�� �߱⶧���� std �Ƿ����
	vector <float> coef;
public:
	int degree() {
		return coef.size();     //coef vector�� ũ�⺯ȯ
	}
	void read() {
		int deg;
		float value;

		printf(" ���׽��� �ְ� ������ �Է��Ͻÿ�. : ");
		scanf("%d", &deg);                //degree�� Ű���� �Է°� �ֱ�
		printf(" �� ���� ����� �Է��Ͻÿ�. (�� %d��) : ", deg + 1);
		for (int i = 0; i <= deg; i++)
		{
			scanf("%f", &value);   //value ������ ����
			coef.push_back(value); //push_back : vector �ȿ� �ִ� �Լ�
		}
	}

};

class Polynomial {
	int degree;                      // ���׽��� �ְ�����
	float coef[MAX_DEGREE];         // �� �׿� ���� ��� (Codfficient)

public:
	// ������ (Constructor)
	Polynomial() {
		degree = 0;                 // degree 0���� �ʱ�ȭ
		coef[0] = 0.0f;             // coef �迭�� 0��° 0.0f�� �ʱ�ȭ
	}
	// Polynomial (): degree(0)

	void read() {
		printf(" ���׽��� �ְ� ������ �Է��Ͻÿ�. : ");
		scanf("%d", &degree);                //degree�� Ű���� �Է°� �ֱ�
		printf(" �� ���� ����� �Է��Ͻÿ�. (�� %d��) : ", degree + 1);
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

