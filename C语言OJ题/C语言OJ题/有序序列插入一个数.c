#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[51] = { 0 };
	int i = 0;


	for (i; i < n; i++)
	{
		scanf("%d", &arr[i]);

	}

	int c = 0;
	scanf("%d", &c);
	int tem = n;

	for (i = n - 1; i >= 0; i--)
	{
		if (arr[i] > c)
		{
			arr[i + 1] = arr[i];
		}
		else
		{
			arr[i + 1] = c;
			break;
		}
	}
	if (i < 0)
	{
		arr[0] = c;
	}
	for (int j = 0; j < tem + 1; j++)
	{
		printf("%d ", arr[j]);
	}

	return 0;
}