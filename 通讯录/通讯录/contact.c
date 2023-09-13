#define  _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

//静态版本
//void InitCnt(CntInfo* c)
//{
//	c->sz = 0;
//	memset(c->contact, 0, sizeof(c->contact));
//}

//动态版本
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
//静态版本
//void AddCnt(CntInfo* c)
//{
//	if (c->sz == MAX)
//	{
//		printf("通讯录已满，请勿再添加。\n");
//		return;
//	}
//	printf("开始输入联系人信息\n");
//	printf("请输入姓名：");
//	scanf("%s", c->contact[c->sz].name);
//	printf("请输入性别：");
//	scanf("%s", c->contact[c->sz].sex);
//	printf("请输入年龄：");
//	scanf("%d", &(c->contact[c->sz].age));
//	printf("请输入电话：");
//	scanf("%s", c->contact[c->sz].tele);
//	printf("请输入地址：");
//	scanf("%s", c->contact[c->sz].address);
//
//	c->sz++;
//	printf("添加成功\n");
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
			printf("\n增容成功\n");
		}
		else
		{
			perror("AddCnt");
			return;
		}
	}
}

//动态版本
void AddCnt(CntInfo* c)
{
	Check(c);
	printf("开始输入联系人信息\n");
	printf("请输入姓名：");
	scanf("%s", c->contact[c->sz].name);
	printf("请输入性别：");
	scanf("%s", c->contact[c->sz].sex);
	printf("请输入年龄：");
	scanf("%d", &(c->contact[c->sz].age));
	printf("请输入电话：");
	scanf("%s", c->contact[c->sz].tele);
	printf("请输入地址：");
	scanf("%s", c->contact[c->sz].address);

	c->sz++;
	printf("添加成功\n");

}

void PrintCnt(CntInfo* c)
{
	//while (c->sz--)
	//{
	//	printf("%s",c->contact[0].name[0])
	//}

	printf("%-10s %-5s %-5s %-12s %-20s\n", "姓名", "性别", "年龄", "电话", "地址");
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
		printf("您的通讯录已清空\n");
		return;
	}
	printf("请输入您想删除的联系人名称：");
	scanf("%s", name);
	int ret = FinByName(c, name);
	if (ret == -1)
	{
		printf("没有要删除的该联系人\n");
		return;
	}
	int i = 0;
	for (i = ret; i < c->sz - 1; i++)
	{
		c->contact[i] = c->contact[i + 1];
	}
	c->sz--;
	printf("删除成功");
}

void SearchCnt(CntInfo* c)
{
	char name[MAX_NAME] = { 0 };
	printf("请输入您想查找的联系人名称：");
	scanf("%s", name);
	int ret = FinByName(c, name);
	if (ret == -1)
	{
		printf("没有查询到该联系人\n");
		return;
	}
	printf("%-10s %-5s %-5s %-12s %-20s\n", "姓名", "性别", "年龄", "电话", "地址");
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
	printf("请输入您想修改的联系人名称：");
	scanf("%s", name);
	int ret = FinByName(c, name);
	if (ret == -1)
	{
		printf("没有查询到该联系人\n");
		return;
	}
	printf("%-10s %-5s %-5s %-12s %-20s\n", "姓名", "性别", "年龄", "电话", "地址");
	printf("%-10s %-5s %-5d %-12s %-20s\n", c->contact[ret].name,
		c->contact[ret].sex,
		c->contact[ret].age,
		c->contact[ret].tele,
		c->contact[ret].address
	);
	char i;
	printf("确定修改该联系人吗，退出请输入n :");
	scanf("%c", &i);

	if (i == 'n')
	{
		return;
	}

	printf("开始修改联系人信息\n");
	printf("请输入姓名：");
	scanf("%s", c->contact[ret].name);
	printf("请输入性别：");
	scanf("%s", c->contact[ret].sex);
	printf("请输入年龄：");
	scanf("%d", &(c->contact[ret].age));
	printf("请输入电话：");
	scanf("%s", c->contact[ret].tele);
	printf("请输入地址：");
	scanf("%s", c->contact[ret].address);

	printf("修改成功\n");
}

void SortCnt(CntInfo* c)
{
	printf("目前没有排序功能");
}

void DstCnt(CntInfo* c)
{
	free(c->contact);
	c->contact = NULL;
	c->sz = 0;
	c->cp = 0;
}