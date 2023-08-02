#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int CtDf(int m, int n)
{
	int df = m ^ n;
	int count = 0;
	while (df != 0)
	{
		df &= (df - 1);
		count++;
	}
	return count;
}

int main()
{
	//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
	//	输入例子 :
	//1999 2299
	//	输出例子 : 7

	int m = 0, n = 0;
	scanf("%d %d", &m, &n);
	printf("输入数据位的不同数=%d", CtDf(m, n));




	return 0;
}