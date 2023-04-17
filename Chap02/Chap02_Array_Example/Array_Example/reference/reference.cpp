#include <cstdio>

void swap(int& x, int& y)   //&는 주소값 의미, &없으면 값이 안 바뀜
{
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
}

int main()
{
	int a = 1, b = 2;
	printf("a = %d, b = %d \n", a, b);
	swap(a, b);
	printf("swap 호출 후 , a = %d, b = %d \n", a, b);

	return 0;
}