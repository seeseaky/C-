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

	//дһ���������ز����������� 1 �ĸ�����
	//���磺 15    0000 1111    4 �� 1
	int num = 0;
	scanf("%d", &num);
	P1(num);

	return 0;
}