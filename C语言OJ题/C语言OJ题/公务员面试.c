#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main()
{
	int score = 0;
	int i = 0;
	double sum = 0;
	int max = 0;
	int min = 100;
	while (1)
	{

		for (i = 0; i < 7; i++)
		{
			if (scanf("%d", &score) == EOF) {
				return 0; // ÊäÈë½áÊø
			}
			if (score > max)
				max = score;
			if (score < min)
				min = score;
			sum += score;
		}
		printf("%.2f", (sum - max - min) / 5.0);
	}



	return 0;
}