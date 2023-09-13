#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDRESS 30
#define MAX 1000

#define DEF_SZ 3
#define INC_SZ 2

enum Option
{
	EXIT,
	ADD,
	DELETE,
	SEARCH,
	MODIFY,
	SORT,
	PRINT
};

typedef struct Contact
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char address[MAX_ADDRESS];
}Contact;

//¾²Ì¬°æ±¾
//typedef struct CntInfo
//{
//	Contact contact[MAX];
//	int sz;
//}CntInfo;

//¶¯Ì¬°æ±¾
typedef struct CntInfo
{
	Contact* contact;
	int sz;
	int cp;
}CntInfo;

void InitCnt(CntInfo* c);

void AddCnt(CntInfo* c);

void PrintCnt(CntInfo* c);

void DeleteCnt(CntInfo* c);

void SearchCnt(CntInfo* c);

void ModifyCnt(CntInfo* c);

void SortCnt(CntInfo* c);

void DstCnt(CntInfo* c);