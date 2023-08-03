#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main() {
	int money = 20; // 给定的金额
	int bottles = money; // 初始时，拥有的空瓶数等于金额数
	int totalDrinks = 20; // 喝到的汽水总数

	while (bottles >= 2) {
		int drinks = bottles / 2; // 当前拥有的空瓶可以换多少瓶汽水
		totalDrinks += drinks; // 喝到的汽水数量增加
		bottles = bottles % 2 + drinks; // 更新剩余的空瓶数
	}

	printf("给定 %d 元，可以喝到 %d 瓶汽水\n", money, totalDrinks);
	return 0;
}