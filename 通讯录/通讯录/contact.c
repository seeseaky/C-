#define  _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

//��̬�汾
//void InitCnt(CntInfo* c)
//{
//	c->sz = 0;
//	memset(c->contact, 0, sizeof(c->contact));
//}

//��̬�汾
void InitCnt(CntInfo* c)
{
	c->contact = (Contact*)malloc(sizeof(Contact) * DEF_SZ);
	if (c->contact == NULL)
	{
		perror("InitCnt");
		return;
	}
	c->sz = 0;
	c->cp = DEF_SZ;

}
//��̬�汾
//void AddCnt(CntInfo* c)
//{
//	if (c->sz == MAX)
//	{
//		printf("ͨѶ¼��������������ӡ�\n");
//		return;
//	}
//	printf("��ʼ������ϵ����Ϣ\n");
//	printf("������������");
//	scanf("%s", c->contact[c->sz].name);
//	printf("�������Ա�");
//	scanf("%s", c->contact[c->sz].sex);
//	printf("���������䣺");
//	scanf("%d", &(c->contact[c->sz].age));
//	printf("������绰��");
//	scanf("%s", c->contact[c->sz].tele);
//	printf("�������ַ��");
//	scanf("%s", c->contact[c->sz].address);
//
//	c->sz++;
//	printf("��ӳɹ�\n");
//
//}
void Check(CntInfo* c)
{
	if (c->sz == c->cp)
	{
		Contact* ptr = (Contact*)realloc(c->contact, (c->cp + INC_SZ) * sizeof(Contact));
		if (ptr != NULL)
		{
			c->contact = ptr;
			c->cp += INC_SZ;
			printf("\n���ݳɹ�\n");
		}
		else
		{
			perror("AddCnt");
			return;
		}
	}
}

//��̬�汾
void AddCnt(CntInfo* c)
{
	Check(c);
	printf("��ʼ������ϵ����Ϣ\n");
	printf("������������");
	scanf("%s", c->contact[c->sz].name);
	printf("�������Ա�");
	scanf("%s", c->contact[c->sz].sex);
	printf("���������䣺");
	scanf("%d", &(c->contact[c->sz].age));
	printf("������绰��");
	scanf("%s", c->contact[c->sz].tele);
	printf("�������ַ��");
	scanf("%s", c->contact[c->sz].address);

	c->sz++;
	printf("��ӳɹ�\n");

}

void PrintCnt(CntInfo* c)
{
	//while (c->sz--)
	//{
	//	printf("%s",c->contact[0].name[0])
	//}

	printf("%-10s %-5s %-5s %-12s %-20s\n", "����", "�Ա�", "����", "�绰", "��ַ");
	int i = 0;
	for (i; i < c->sz; i++)
	{
		printf("%-10s %-5s %-5d %-12s %-20s\n", c->contact[i].name,
			c->contact[i].sex,
			c->contact[i].age,
			c->contact[i].tele,
			c->contact[i].address
		);
	}
}

static int FinByName(CntInfo* c, char* n)
{
	int i = 0;
	for (i; i < c->sz; i++)
	{
		int ret = strcmp(c->contact[i].name, n);
		if (ret == 0)
		{
			return i;
		}
	}
	return -1;
}

void DeleteCnt(CntInfo* c)
{
	char name[MAX_NAME] = { 0 };
	if (c->sz == 0)
	{
		printf("����ͨѶ¼�����\n");
		return;
	}
	printf("����������ɾ������ϵ�����ƣ�");
	scanf("%s", name);
	int ret = FinByName(c, name);
	if (ret == -1)
	{
		printf("û��Ҫɾ���ĸ���ϵ��\n");
		return;
	}
	int i = 0;
	for (i = ret; i < c->sz - 1; i++)
	{
		c->contact[i] = c->contact[i + 1];
	}
	c->sz--;
	printf("ɾ���ɹ�");
}

void SearchCnt(CntInfo* c)
{
	char name[MAX_NAME] = { 0 };
	printf("������������ҵ���ϵ�����ƣ�");
	scanf("%s", name);
	int ret = FinByName(c, name);
	if (ret == -1)
	{
		printf("û�в�ѯ������ϵ��\n");
		return;
	}
	printf("%-10s %-5s %-5s %-12s %-20s\n", "����", "�Ա�", "����", "�绰", "��ַ");
	printf("%-10s %-5s %-5d %-12s %-20s\n", c->contact[ret].name,
		c->contact[ret].sex,
		c->contact[ret].age,
		c->contact[ret].tele,
		c->contact[ret].address
	);
}

void ModifyCnt(CntInfo* c)
{
	char name[MAX_NAME] = { 0 };
	printf("�����������޸ĵ���ϵ�����ƣ�");
	scanf("%s", name);
	int ret = FinByName(c, name);
	if (ret == -1)
	{
		printf("û�в�ѯ������ϵ��\n");
		return;
	}
	printf("%-10s %-5s %-5s %-12s %-20s\n", "����", "�Ա�", "����", "�绰", "��ַ");
	printf("%-10s %-5s %-5d %-12s %-20s\n", c->contact[ret].name,
		c->contact[ret].sex,
		c->contact[ret].age,
		c->contact[ret].tele,
		c->contact[ret].address
	);
	char i;
	printf("ȷ���޸ĸ���ϵ�����˳�������n :");
	scanf("%c", &i);

	if (i == 'n')
	{
		return;
	}

	printf("��ʼ�޸���ϵ����Ϣ\n");
	printf("������������");
	scanf("%s", c->contact[ret].name);
	printf("�������Ա�");
	scanf("%s", c->contact[ret].sex);
	printf("���������䣺");
	scanf("%d", &(c->contact[ret].age));
	printf("������绰��");
	scanf("%s", c->contact[ret].tele);
	printf("�������ַ��");
	scanf("%s", c->contact[ret].address);

	printf("�޸ĳɹ�\n");
}

void SortCnt(CntInfo* c)
{
	printf("Ŀǰû��������");
}

void DstCnt(CntInfo* c)
{
	free(c->contact);
	c->contact = NULL;
	c->sz = 0;
	c->cp = 0;
}