#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void Cgorder(int arr[], int len)
{
	int left = 0;
	int right = len - 1;
	int tmp = 0;


	while (left < right)
	{
		// ��ǰ�����ҵ�һ��ż�����ҵ���ֹͣ
		while ((left < right) && (arr[left] % 2 == 1))
		{
			left++;
		}

		// �Ӻ���ǰ�ң���һ���������ҵ���ֹͣ
		while ((left < right) && (arr[right] % 2 == 0))
		{
			right--;
		}

		// ���ż�����������ҵ����������������ݵ�λ��
		// Ȼ������ң�ֱ������ָ������
		if (left < right)
		{
			arr[left] = arr[left] ^ arr[right];
			arr[right] = arr[left] ^ arr[right];
			arr[left] = arr[left] ^ arr[right];
		}
	}
}

int main()
{
	//��������ʹ����ȫ����λ��ż��ǰ�档
	//	��Ŀ��
	//	����һ���������飬ʵ��һ��������
	//	�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
	//	����ż��λ������ĺ�벿�֡�
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int len = sizeof(arr) / sizeof(arr[0]);
	Cgorder(arr, len);
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}