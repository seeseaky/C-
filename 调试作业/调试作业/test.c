#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	const int* p = &m;
	p = &n;
	*p = 100;

	return 0;
}