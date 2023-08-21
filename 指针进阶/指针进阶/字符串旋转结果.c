#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int Spin(char* a1, char* a2, int len)
{

	int n = len / 2;
	int m = n;
	while (n != 0)
	{
		char tmp = *a1;
		for (int i = 0; i <= len - 1; i++)
		{
			*(a1 + i) = *(a1 + i + 1);
		}
		*(a1 + len - 1) = tmp;
		n--;
	}
	printf("%s\n", a1);
	for (int j = 0; j <= len - 1; j++)
	{
		if (*(a1 + j) != *(a2 + j))
		{
			return 0;
		}
	}
	return 1;
}


int main()
{
	/*写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
		例如：给定s1 = AABCD和s2 = BCDAA，返回1
		给定s1 = abcd和s2 = ACBD，返回0.
		AABCD左旋一个字符得到ABCDA
		AABCD左旋两个字符得到BCDAA
		AABCD右旋一个字符得到DAABC*/
	char a1[] = "AABCD";
	char a2[] = "BCDAA";
	int len = sizeof(a1) / sizeof(a1[0]) - 1;
	printf("%d", Spin(a1, a2, len));


	return 0;
}