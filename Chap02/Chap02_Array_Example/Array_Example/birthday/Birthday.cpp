#include "birthday.h"

int main()
{
	Student eei[10];      // ��ü �迭
	strcpy(eei[2].name, "Seoyeon Kim");
	eei[2].bDay.month = 6;
	eei[2].bDay.date = 28;
	printf("�̸��� : %s, %d�� %d�� ���Դϴ�. \n", eei[2].name, eei[2].bDay.month, eei[2].bDay.date);
}