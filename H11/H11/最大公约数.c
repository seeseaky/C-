#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int a = 0, b = 0, i = 0;
	scanf("%d%d", &a, &b);
	if (a < b) {
		int temp = 0;
		temp = a;
		a = b;
		b = temp;
	}
	for (i = b; i >=1; i--) {
		if ((a % i == 0) && (b % i == 0)) {
			printf("%d", i);
			break;
		}
	}

	return 0;
}