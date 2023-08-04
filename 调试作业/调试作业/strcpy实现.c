#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void Cpystr(char* p, char* q)
{
	//char* p = a1;
	//char* q = a2;
	while (*p++ = *q++)
	{
		;
	}
}
int main()
{
	char a1[] = "f**********y****";
	char a2[] = "Don't be so mad.";
	Cpystr(a1, a2);
	int len = sizeof(a1) / sizeof(a1[0]);
	for (int i = 0; i < len; i++)
	{
		printf("%c", a1[i]);
	}
	return 0;
}