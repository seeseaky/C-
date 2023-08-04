#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int Mstrlen(const char arr[])
{
	assert(arr != NULL);
	int count = 0;
	while (*arr != '\0')
	{
		count++;
		arr += 1;
	}
	return count;
}

int main()
{
	char arr[] = "hello";
	int len = Mstrlen(arr);
	printf("%d", len);
	return 0;
}