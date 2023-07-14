#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
main()
{
	int n = 0;
	int sum = 1;
	scanf("%d", &n);
	for (n; n > 1; n--)
	{
		sum = sum * n;

	}
	printf("%d", sum);

	return 0;
}