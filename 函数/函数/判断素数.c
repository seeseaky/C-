#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int is_prime(int x)
{
	int b = 0;
	for (b = x - 1; b >= 2; b--)
	{
		if (x % b == 0)return 0;
	}
	return 1;
}
int main()
{
	int i = 0;
	int a = 0;
	int f = 0;
	scanf("%d", &a);
	i = is_prime(a);
	if (i == 1) printf("是素数\n");
	else printf("不是素数\n");
	for (f = 100; f <= 200; f++)
	{
		i = is_prime(f);
		if (i == 1)printf("%d ", f);
	}
	return 0;
}