#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

char* my_strcat(char* a, char* b)
{
	char* p = a;
	for (; *a != '\0'; a++)
	{
		;
	}
	while (*a++ = *b++)
	{
		;
	}
	return p;
}

int main()
{
	char a[10] = "abcd";
	char b[] = "efg";
	char* ret = my_strcat(a, b);
	printf("%s", ret);

	return 0;
}