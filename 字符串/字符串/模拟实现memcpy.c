#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void* my_memcpy(void* a, void* b, int len)
{
	void* ret = a;
	while (len--)
	{
		*(char*)a = *(char*)b;
		a = (char*)a + 1;
		b = (char*)b + 1;
	}
	return ret;
}
int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9 };
	int b[] = { 3,6,1 };
	void* ret = my_memcpy(a, b, 12);

	return 0;
}