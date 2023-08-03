#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void Reverse(int arr[], int len)
{
	int* left = arr;
	int* right = arr + len - 1;
	int tmp = 0;
	while (right > left)
	{
		tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

int main()
{
	//写一个函数，可以逆序一个字符串的内容。
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int len = sizeof(arr) / sizeof(arr[0]);
	Reverse(arr, len);
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}