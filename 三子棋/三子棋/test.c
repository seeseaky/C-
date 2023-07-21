#define  _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("*************************************\n");
	printf("********1.进入游戏三子棋   **********\n");
	printf("********2.退出菜单         **********\n");
	printf("*******（输入1或2进行选择）**********\n");
	printf("*************************************\n");
}

void game()
{
	//存储数据
	char board[ROW][COL];
	//初始化棋盘
	InBd(board, ROW, COL);
	//打印棋盘
	PrBd(board, ROW, COL);


	char ret;
	while (1)
	{

		//玩家下棋
		Play(board, ROW, COL);
		PrBd(board, ROW, COL);
		//判断是否有胜负

		ret = Win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		Cmp(board, ROW, COL);
		PrBd(board, ROW, COL);
		//判断胜负
		ret = Win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢");
	}
	if (ret == '#')
	{
		printf("电脑赢");
	}
	if (ret == 'Q')
	{
		printf("平局");
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
			printf("请输入1或2\n");
			break;
		}

	} while (pick != 2);

	return 0;
}