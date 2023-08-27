#define  _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

void menu()
{
	printf("**********************************\n");
	printf("******* 1.add    2.delete ********\n");
	printf("******* 3.search 4.modify ********\n");
	printf("******* 5.sort   6.print  ********\n");
	printf("******* 0.exit            ********\n");
	printf("**********************************\n");

}



int main()
{
	int input = 0;
	CntInfo cnt;
	InitCnt(&cnt);

	do
	{
		menu();
		printf("��ѡ������Ҫ�Ĳ�����>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddCnt(&cnt);
			break;
		case DELETE:
			DeleteCnt(&cnt);
			break;
		case SEARCH:
			SearchCnt(&cnt);
			break;
		case MODIFY:
			ModifyCnt(&cnt);
			break;
		case SORT:
			SortCnt(&cnt);
			break;
		case PRINT:
			PrintCnt(&cnt);
			break;
		case EXIT:
			printf("�˳��ɹ�\n");
			break;
		default:
			printf("ѡ�����������˵��е�ѡ�\n");
			break;
		}
		printf("\n\n\n");
	} while (input);

	return 0;
}