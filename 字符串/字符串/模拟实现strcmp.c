#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int my_strcpy(char* a, char* b)
{
	while ((*a != '\0') || (*b != '\0'))
	{
		if (*a > *b)
		{
			return 1;
		}
		else if (*a < *b)
		{
			return -1;
		}
		else
		{
			a++;
			b++;
		}
	}
	return 0;
}

int main()
{
	char a[] = "abcd";
	char b[] = "abcd";
	int ret = my_strcpy(a, b);
	printf("%d", ret);

	return 0;
}