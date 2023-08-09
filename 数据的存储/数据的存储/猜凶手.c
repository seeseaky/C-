#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



int main()
{
	char k = '\0';
	for (k = 'a'; k <= 'd'; k++)
	{
		if (((k != 'a') + (k == 'c') + (k == 'd') + (k != 'd')) == 3)
		{
			printf("%c", k);
		}
	}


	return 0;
}