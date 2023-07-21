#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
double Cif(int a, int b)
{
	if (b > 0)
	{
		return Cif(a, b - 1) * a;
	}
	else if (b == 0) return 1.0;
	else return 1.0 / Cif(a, -b);
}
int main()
{
	int a = 0;
	int b = 0;
	double sum;
	scanf("%d %d", &a, &b);
	sum = Cif(a, b);
	printf("%lf", sum);

	return 0;
}