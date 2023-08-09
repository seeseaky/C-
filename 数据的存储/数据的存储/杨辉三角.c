#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main()
{
	int a[10][10] = { 0 };
	a[0][0] = 1;
	printf("%d\n", a[0][0]);
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			a[i][0] = 1;
			a[i][i] = 1;
			if (a[i][j] != a[i][0] && a[i][j] != a[i][i])
			{
				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
			}
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}