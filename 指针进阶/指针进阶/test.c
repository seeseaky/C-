#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main()
{
	int arr[2][3] = { {1,2},{3,4} };
	//int arr[2] = { 1,2 };
	printf("%p", *arr);


	return 0;
}