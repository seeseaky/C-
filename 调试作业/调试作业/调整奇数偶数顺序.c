#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void Cgorder(int arr[], int len)
{
	int left = 0;
	int right = len - 1;
	int tmp = 0;


	while (left < right)
	{
		// 从前往后，找到一个偶数，找到后停止
		while ((left < right) && (arr[left] % 2 == 1))
		{
			left++;
		}

		// 从后往前找，找一个奇数，找到后停止
		while ((left < right) && (arr[right] % 2 == 0))
		{
			right--;
		}

		// 如果偶数和奇数都找到，交换这两个数据的位置
		// 然后继续找，直到两个指针相遇
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
	//调整数组使奇数全部都位于偶数前面。
	//	题目：
	//	输入一个整数数组，实现一个函数，
	//	来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
	//	所有偶数位于数组的后半部分。
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int len = sizeof(arr) / sizeof(arr[0]);
	Cgorder(arr, len);
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}