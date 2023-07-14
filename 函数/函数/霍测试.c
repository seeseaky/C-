#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int i = 0;
	int n = 0;
	int g = 0;
	scanf("%d %d", &a, &b);
	if (a > b)
		n = b;
	else
		n = a;
	for (i = 1; i <= n; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			g = i;
		}

	}
	printf("最大公约数是：%d\n", g);
	return 0;
}