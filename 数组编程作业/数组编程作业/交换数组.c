#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


void swap(int arr1[], int arr2[], int len)
{
	int tem;
	for (int i = 0; i < len; i++)
	{
		tem = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tem;
	}
}
void print(int arr[], int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 10,9,8,7,6,5,4,3,2,1 };
	int len = sizeof(arr1) / sizeof(arr1[0]);
	swap(arr1, arr2, len);
	print(arr2, len);
	return 0;
}