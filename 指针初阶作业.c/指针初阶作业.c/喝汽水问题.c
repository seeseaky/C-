#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main() {
	int money = 20; // �����Ľ��
	int bottles = money; // ��ʼʱ��ӵ�еĿ�ƿ�����ڽ����
	int totalDrinks = 20; // �ȵ�����ˮ����

	while (bottles >= 2) {
		int drinks = bottles / 2; // ��ǰӵ�еĿ�ƿ���Ի�����ƿ��ˮ
		totalDrinks += drinks; // �ȵ�����ˮ��������
		bottles = bottles % 2 + drinks; // ����ʣ��Ŀ�ƿ��
	}

	printf("���� %d Ԫ�����Ժȵ� %d ƿ��ˮ\n", money, totalDrinks);
	return 0;
}