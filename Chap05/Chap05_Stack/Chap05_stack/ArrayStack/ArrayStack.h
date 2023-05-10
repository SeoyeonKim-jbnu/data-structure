#pragma once
#include <cstdio>
const int MAX_STACK_SIZE = 20; 
// #define MAX_STACK_SIZE 20

class ArrayStack
{
	int top;
	int data[MAX_STACK_SIZE];       //������
public:
	ArrayStack() { top = -1; }    //��ü ������ top�� -1 �ֱ�
	~ArrayStack(){}
	bool isEmpty() {
		return top == -1;            // == �񱳿����� : ������ ture, �ٸ��� false ��ȯ
	}
	bool isFull() {
		return top == MAX_STACK_SIZE - 1;
	}
	void push(int e) {                   //�Լ�����
		if (isFull())
			printf("���� ��ȭ ����");
		else
			data[++top] = e;
	}
	int pop() {
		if (isEmpty())
			printf("���� ���� ����");
		
		return data[top--];        //top �� return �� top = top - 1
	}
	int peek() {
		if (isEmpty())           // if(true)
			printf("���� ���� ����");
		
		return data[top];
	}
	void display() {
		printf("[���� �׸��� �� = %2d] ==> ", top + 1);
		for (int i = 0; i <= top; i++)
			printf("< %2d > ", data[i]);
		printf("\n");
	}

};