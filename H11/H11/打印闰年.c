#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int i = 0;
	for (i = 1000; i <= 2000; i += 4) {
		if (i % 100 == 0 && i % 400 != 0)
			continue;
		printf("%d ", i);
	}

	return 0;
}
