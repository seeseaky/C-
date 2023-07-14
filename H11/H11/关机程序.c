#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char arr[20] = { 0 };
	system("shutdown -s -t 60");
	while (1)
	{
		printf("\n\n\n\n");
		printf("电脑将在1分钟后关机");
		printf("在输入你正确的性取向后（“我是gay”、“我只喜欢男人”）即可避免关机：\n请在此输入性取向:>");
		scanf("%s", arr);
		if (strcmp(arr, "我是gay") == 0 || strcmp(arr, "我只喜欢男人") == 0)
		{
			system("shutdown -a");
			break;
		}
		else printf("性取向错误，必须重新输入");

	}
	return 0;
}