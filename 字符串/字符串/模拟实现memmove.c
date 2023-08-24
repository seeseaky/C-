#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void* my_memmove(void* a, void* b, int len)
{
	void* ret = a;
	if (a < b)
	{
		while (len--)
		{
			*(char*)a = *(char*)b;
			a = (char*)a + 1;
			b = (char*)b + 1;
		}
		return ret;
	}
	else
	{
		a = (char*)a + len - 1;
		b = (char*)b + len - 1;
		while (len--)
		{
			*(char*)a = *(char*)b;
			a = (char*)a - 1;
			b = (char*)b - 1;
		}
		/*while (len--)
		{
			*((char*)a + len) = *((char*)b + len);
		}*/
		return ret;
	}

}

int main()
{
	int a[] = { 1,2,3,4,5,6,7,8 };
	//my_memmove(a, &a[2], 16);
	my_memmove(&a[2], a, 16);

	return 0;
}