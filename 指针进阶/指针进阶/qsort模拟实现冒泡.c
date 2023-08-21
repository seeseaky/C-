#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int cmp(const void* p1, const void* p2)
{
	return *(int*)p1 - *(int*)p2;
}


int main()
{
	int a[] = { 10,9,8,6,7,5,4,3,2,1 };

	int len = sizeof(a) / sizeof(a[0]);
	qsort(a, len, sizeof(a[0]), cmp);

	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
		printf("%d ", a[i]);
	}

	return 0;
}