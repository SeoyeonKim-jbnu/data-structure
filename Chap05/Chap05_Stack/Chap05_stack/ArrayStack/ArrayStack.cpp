#include "ArrayStack.h"

int main()
{
	ArrayStack stack;       // ArrayStack 클래스로 stack 객체 생성  <=> stack은 ArrayStack의 instance
	for (int i = 1; i < 10; i++)
		stack.push(i);

	stack.display();

	return 0;
}