#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main()
{
	int y = 0;
	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int day = 0;
	int m = 0;
	while (scanf("%d %d", &y, &m) != EOF)
	{
		if (m == 2)
		{
			if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
			{
				printf("%d\n", days[m] + 1);
				continue;
			}
		}
		printf("%d\n", days[m]);

	}

	return 0;
}