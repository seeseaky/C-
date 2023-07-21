#define  _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("*************************************\n");
	printf("********1.������Ϸ������   **********\n");
	printf("********2.�˳��˵�         **********\n");
	printf("*******������1��2����ѡ��**********\n");
	printf("*************************************\n");
}

void game()
{
	//�洢����
	char board[ROW][COL];
	//��ʼ������
	InBd(board, ROW, COL);
	//��ӡ����
	PrBd(board, ROW, COL);


	char ret;
	while (1)
	{

		//�������
		Play(board, ROW, COL);
		PrBd(board, ROW, COL);
		//�ж��Ƿ���ʤ��

		ret = Win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//��������
		Cmp(board, ROW, COL);
		PrBd(board, ROW, COL);
		//�ж�ʤ��
		ret = Win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ");
	}
	if (ret == '#')
	{
		printf("����Ӯ");
	}
	if (ret == 'Q')
	{
		printf("ƽ��");
	}

}
int main()
{
	int pick = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();

		scanf("%d", &pick);
		switch (pick)
		{
		case 1:
			game();
			break;
		case 2:
			//exit();
			break;
		default:
			printf("������1��2\n");
			break;
		}

	} while (pick != 2);

	return 0;
}