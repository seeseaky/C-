#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int add(int x, int y)
//{
//	return x + y;
//}
int main()
{
	//int (*pfArr[3])(int, int) = { add }; // 函数指针数组

	//int x = 1, y = 2;

	//int ret1 = (pfArr[0])(x, y); // 括号在函数指针前
	//int ret2 = pfArr[0](x, y);   // 括号在整个语句前
	//printf("%d %d", ret1, ret2);
	char arr[10] = { 'a' };
	printf("%d", strlen(*arr));
	return 0;
}