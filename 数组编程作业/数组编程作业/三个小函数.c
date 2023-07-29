#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


void init(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		if (arr[i] != 0)
		{
			arr[i] = 0;
		}
	}
}
void print(int arr[], int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
}

void reverse(int arr[], int len)
{
	for (int i = 0; i < len / 2; i++)
	{
		int tem = 0;
		tem = arr[len - i - 1];
		arr[len - i - 1] = arr[i];
		arr[i] = tem;
	}
}
int main()
{
	/*创建一个整形数组，完成对数组的操作

		实现函数init() 初始化数组为全0
		实现print()  打印数组的每个元素
		实现reverse()  函数完成数组元素的逆置*/

	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("原数组为：");
	print(arr, len);

	reverse(arr, len);
	printf("修改后的数组为：");
	print(arr, len);

	return 0;
}