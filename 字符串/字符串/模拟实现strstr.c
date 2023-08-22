#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

char* my_strstr(char* a, char* b)
{
	char* p = a;
	while (1)
	{
		char* p1 = p;
		char* p2 = b;
		while (*p1 != *p2)
		{
			p1++;
			p++;
		}
		while ((*p1 == *p2) && (*p1) != '\0' && (*p2) != '\0')
		{
			p1++;
			p2++;
		}
		if ((*p2) == '\0')
		{
			return (char*)p;
		}
		p++;

	}
	return NULL;

}

int main()
{
	//strtst=string find substring
	char a[] = "abbbcdefg";
	char b[] = "bbcd";
	char* ret = my_strstr(a, b);
	if (ret == NULL)
	{
		printf("’“≤ªµΩ\n");
	}
	printf("%s", ret);

	return 0;
}