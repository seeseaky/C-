#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
main()
{
	int i = 0;
	int n = 0;
	int sum = 0;
	int sum2 = 1;
	for (n=1; n <=3; n++)
	{
		sum2 = 1;
		for (i=1; i <=n; i++)
		{
			sum2 = sum2 * i;
		}
		sum =sum+sum2;
	}
	printf("%d", sum);

	return 0;
}