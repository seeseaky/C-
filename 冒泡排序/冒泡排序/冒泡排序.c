#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void Bubble(int arr[], int len)
{
	int i = 0, j = 0, tem = 0;
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tem = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tem;
			}
		}
	}
}

int main()
{
	int i = 0;
	int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("原数组为：");
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	Bubble(arr, len);

	printf("冒泡排序后的数组为：");
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}


	return 0;
}