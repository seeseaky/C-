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
	//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
	int num = 0;
	scanf("%d", &num);
	Pe(num);

	return 0;
}