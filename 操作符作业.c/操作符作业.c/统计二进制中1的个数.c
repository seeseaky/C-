#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void P1(int num)
{
	int count = 0;
	while (num != 0)
	{
		num &= (num - 1);
		count++;
	}
	printf("%d", count);
}

int main()
{

	//写一个函数返回参数二进制中 1 的个数。
	//比如： 15    0000 1111    4 个 1
	int num = 0;
	scanf("%d", &num);
	P1(num);

	return 0;
}