#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int a = 0;
	int cd = 0;
	for (i = 1; i <= 9; i++)
	{
		for (a = i; a <= 9; a++)
		{
			printf("%d*%d=%-2d ", i, a, i * a);
		}
		printf("\n");
	}

	return 0;
}