#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



int main()
{
	/*дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
	arr��һ������һά���顣*/
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* parr = arr;
	for (int i = 0; i <= 9; i++)
	{
		printf("%d ", *parr + i);
	}

	return 0;
}