#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char arr[20] = { 0 };
	system("shutdown -s -t 60");
	while (1)
	{
		printf("\n\n\n\n");
		printf("���Խ���1���Ӻ�ػ�");
		printf("����������ȷ����ȡ��󣨡�����gay��������ֻϲ�����ˡ������ɱ���ػ���\n���ڴ�������ȡ��:>");
		scanf("%s", arr);
		if (strcmp(arr, "����gay") == 0 || strcmp(arr, "��ֻϲ������") == 0)
		{
			system("shutdown -a");
			break;
		}
		else printf("��ȡ����󣬱�����������");

	}
	return 0;
}