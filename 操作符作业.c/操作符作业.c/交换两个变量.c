#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	//����������ʱ������������������������
	int a = 13;
	int b = 24;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d %d", a, b);

	return 0;
}