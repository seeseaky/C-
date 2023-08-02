#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void Pe(int num)
{
	for (int i = 30; i >= 0; i -= 2)
	{
		printf("%d", (num >> i) & 1);
	}
}

int main()
{
	//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
	int num = 0;
	scanf("%d", &num);
	Pe(num);

	return 0;
}