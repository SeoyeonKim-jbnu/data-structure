#include "ArrayStack.h"

int main()
{
	ArrayStack stack;       // ArrayStack Ŭ������ stack ��ü ����  <=> stack�� ArrayStack�� instance
	for (int i = 1; i < 10; i++)
		stack.push(i);

	stack.display();

	return 0;
}