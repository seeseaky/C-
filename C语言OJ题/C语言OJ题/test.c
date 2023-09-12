#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int score = 0;
	int i = 0;
	int sum = 0;
	int max = 0;
	int min = 100;

	while (1) {
		int inputCount = 0;
		sum = 0;
		max = 0;
		min = 100;

		for (i = 0; i < 7; i++) {
			scanf("%d", &score);
			inputCount++;
			if (score > max)
				max = score;
			if (score < min)
				min = score;
			sum += score;
		}

		if (inputCount < 7) {
			// 不足七个数，结束输入
			break;
		}

		printf("%.2f\n", (sum - max - min) / 5.0);
	}

	return 0;
}