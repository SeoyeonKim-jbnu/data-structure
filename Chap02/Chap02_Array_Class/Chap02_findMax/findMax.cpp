#include <cstdio>

// 1차원 배열에서 최댓값을 찾는 함수
int findMaxValue(int a[], int len)
{
	int maxVal = a[0];

	for (int i = 1; i < len; i++) {
		if (maxVal < a[i])
			maxVal = a[i];

		return maxVal;
	}
}

// 2차원 영상(배열)에서 최대 밝기 값울 찾는 함수 (가장 큰 화소)
int findMaxPixel(int a[][5], int h, int w)
{
	int maxVal = 0;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if (maxVal < a[i][j])
				maxVal = a[i][j];
		}
	}

	return maxVal;
}

int main()
{
	int arr[10] = { 23,54,67,23,9,24,88,76,12,6 };
	
	int img[4][5] = { {3, 23,54,76,54},
		{7,99,34,98,66},
		{43,11,18,89,27},
		{33,66,85,39,2} };

	int maxVal = findMaxValue(arr, 10);
	printf("배열의 최대값 = %d\n", maxVal);

	int maxPixel = findMaxPixel(img, 4, 5);
	printf("영상의 최대 밝기 = %d\n", maxPixel);

	return 0;
}