#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int my_strlen(char* a)
{
	char* p = a;
	int count = 0;
	for (p; *p != '\0'; p++, count++)
	{
		;
	}
	return count;
}
int main()
{
	char a[] = "abcd";
	printf("%d", my_strlen(a));

	return 0;
}