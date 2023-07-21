#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void printArraySize(int arr[]) {
	printf("Size of arr[]: %zu\n", sizeof(arr));
}

void printPointerSize(int* arr) {
	printf("Size of arr*: %zu\n", sizeof(arr));
}

int main() {
	int numbers[] = { 1, 2, 3, 4, 5 };
	//int* ptr = numbers;

	printArraySize(numbers);
	printPointerSize(numbers);
	printf("%d", sizeof(numbers));
	int a;
	printf("\n%d", sizeof a);

	return 0;
}
