#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Mutiplication(int x)
{
	int i = 0;
	int a = 0;
	for (i = 1; i <= x; i++)
	{
		for (a = i; a <= x; a++)
		{
			printf("%d*%d=%-2d ", i, a, i * a);
		}
		printf("\n");
	}
}
int main()
{
	int b = 0;
	scanf("%d", &b);
	Mutiplication(b);


	return 0;
}