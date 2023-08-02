#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
//
//int X(int i, int count)
//{
//	int sum = 0;
//	while (count != 0)
//	{
//		int num = i % 10;
//		num = pow(num, count);
//		sum += num;
//		i /= 10;
//		count--;
//	}
//	return sum;
//}
//
//int Y(int i)
//{
//	int count = 0;
//	while (i != 0)
//	{
//		i /= 10;
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100000; i++)
//	{
//		int count = 0;
//		int sum = 0;
//		count = Y(i);
//		sum = X(i, count);
//		if (sum == i)
//		{
//			printf("%d\n", i);
//		}
//
//	}
//
//
//	return 0;
//}

#include <stdio.h>
#include <math.h> 

// ��������λ��
//int getDigitCount(int i) {
//	int count = 0;
//	while (i != 0) {
//		i /= 10;
//		count++;
//	}
//	return count;
//}
int getDigitCount(int i) {
	if (i == 0) return 1;

	int count = 0;
	while (i != 0) {
		i /= 10;
		count++;
	}

	return count;
}

// �������ָ�λ��֮��  
//int getDigitPowSum(int i, int count) {
//	int sum = 0;
//	while (count != 0) {
//		int num = i % 10;
//		num = pow(num, count);
//		sum += num;
//		i /= 10;
//		count--;
//	}
//	return sum;
//}
int getDigitPowSum(int i, int count) {

	int sum = 0;
	int num = 0;

	while (i != 0) {
		sum += pow(i % 10, count);
		i /= 10;
	}

	return sum;
}

// �ж��Ƿ�ˮ�ɻ���
int is_narcissistic(int i) {
	int count = getDigitCount(i);
	int sum = getDigitPowSum(i, count);
	if (sum == i) {
		return 1; // ��ˮ�ɻ���
	}
	return 0;
}

int main() {
	for (int i = 0; i <= 100000; i++) {
		if (is_narcissistic(i)) {
			printf("%d ", i);
		}
	}
	return 0;
}