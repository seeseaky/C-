#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int add(int x, int y)
//{
//	return x + y;
//}
int main()
{
	//int (*pfArr[3])(int, int) = { add }; // ����ָ������

	//int x = 1, y = 2;

	//int ret1 = (pfArr[0])(x, y); // �����ں���ָ��ǰ
	//int ret2 = pfArr[0](x, y);   // �������������ǰ
	//printf("%d %d", ret1, ret2);
	char arr[10] = { 'a' };
	printf("%d", strlen(*arr));
	return 0;
}