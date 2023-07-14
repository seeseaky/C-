#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int n = 0;
	int i = 0;
	for (n = 100; n <= 200; n++) {
		for (i = 2; i <=n; i++) {
			if (n % i == 0)
				break;
		}
		if (n == i)
			printf("%d\n", n);
	}
	

	return 0;
}