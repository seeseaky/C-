#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int count = 0;
int Dsum(int x)
{

	int y = x % 10;
	if (x > 9)
	{
		x /= 10;
		count = Dsum(x) + y;
	}
	else return x;
}
int main()
{
	int a = 0;
	int sum = 0;
	scanf("%d", &a);
	sum = Dsum(a);
	printf("%d", sum);
	return 0;
}