#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

char* my_strcpy(char* a, char* b)
{
	char* p = a;
	while (*a++ = *b++)
	{
		;
	}
	return p;
}

int main()
{
	char a[] = "abcdefg";
	char b[] = "ufo";
	char* ret = my_strcpy(a, b);
	printf("%s", ret);
	return 0;
}