#include <cstdio>  // ǥ�� ����� �������
#include <cstdlib> // ǥ�� ���̺귯�� �������
#include <ctime>   // time�� ���õ� �������

int main()
{
	clock_t start, finish; // ���� �ð�, ������ �ð� 
	double duration;       // �ɸ� �ð�
	
	start = clock();       // ���� �ð��� start�� ����
	//����ð��� �����ϰ����ϴ� �ڵ� �Է�

	// ...

	finish = clock();      // ���� �ð��� finish�� ����
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("%f�� �ɷȽ��ϴ�.\n", duration);
	
	return 0;
}