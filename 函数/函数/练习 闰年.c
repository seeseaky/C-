#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int is_leapyear(int x)
{
	if (x % 4 == 0 && x % 100!= 0)
	{
		return 1;
	}
	else if (x % 400 == 0)
	{
		return 1;
	}
	return 0;
}
int main()
{
	int y = 0;
	for (y = 1000; y <= 2000; y++)
	{
		if (is_leapyear(y) == 1)
		{
			printf("%d", y);
		}

	}

	return 0;
}