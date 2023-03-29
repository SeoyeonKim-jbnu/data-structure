#include <cstdio>
#define MAX_SIZE 10 //MAX_SIZE 선언

// 배열을 파라미터로 받는 함수
// call by value

void sub(int x, int arr[])
{
	x = 10;
	arr[0] = 10;
}

int main()
{
	int var;
	int list[MAX_SIZE];

	var = 0;
	list[0] = 0;
	sub(var, list);
	printf("var=%d, list[0]=%d\n", var, list[0]);

	return 0;
}

