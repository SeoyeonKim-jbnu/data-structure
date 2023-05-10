#pragma once
#include <cstdio>
const int MAX_STACK_SIZE = 20; 
// #define MAX_STACK_SIZE 20

class ArrayStack
{
	int top;
	int data[MAX_STACK_SIZE];       //정수형
public:
	ArrayStack() { top = -1; }    //객체 생성시 top에 -1 넣기
	~ArrayStack(){}
	bool isEmpty() {
		return top == -1;            // == 비교연산자 : 같으면 ture, 다르면 false 반환
	}
	bool isFull() {
		return top == MAX_STACK_SIZE - 1;
	}
	void push(int e) {                   //함수원형
		if (isFull())
			printf("스택 포화 에러");
		else
			data[++top] = e;
	}
	int pop() {
		if (isEmpty())
			printf("스택 공백 에러");
		
		return data[top--];        //top 값 return 후 top = top - 1
	}
	int peek() {
		if (isEmpty())           // if(true)
			printf("스택 공백 에러");
		
		return data[top];
	}
	void display() {
		printf("[스택 항목의 수 = %2d] ==> ", top + 1);
		for (int i = 0; i <= top; i++)
			printf("< %2d > ", data[i]);
		printf("\n");
	}

};