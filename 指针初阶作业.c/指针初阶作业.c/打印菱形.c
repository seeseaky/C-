#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void Px(int i)
{
	while (i != 0)
	{
		printf("*");
		i--;
	}
}
void Pk(int k)
{
	while (k != 0)
	{
		printf(" ");
		k--;
	}
}

int main()
{
	int i = 1;
	int k1 = 7;
	int k2 = 7;
	for (k1, i; k1 > 0; k1--, i += 2)
	{
		Pk(k1);
		Px(i);
		printf("\n");
	}

	return 0;
}