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
	//���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
	//	�������� :
	//1999 2299
	//	������� : 7

	int m = 0, n = 0;
	scanf("%d %d", &m, &n);
	printf("��������λ�Ĳ�ͬ��=%d", CtDf(m, n));




	return 0;
}