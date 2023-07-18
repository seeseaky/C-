#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;

	float count = 1;
	for (i = 1; i <= 99; i++)
	{
		if (i % 2 == 1)
		{
			count = count - 1 / ((float)i + 1);
		}
		else
		{
			count = count + 1 / ((float)i + 1);
		}
	}
	printf("%f", count);
	return 0;
}