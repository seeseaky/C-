#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDRESS 30
#define MAX 1000

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

typedef struct CntInfo
{
	Contact contact[MAX];
	int sz;
}CntInfo;

void InitCnt(CntInfo* c);

void AddCnt(CntInfo* c);

void PrintCnt(CntInfo* c);

void DeleteCnt(CntInfo* c);

void SearchCnt(CntInfo* c);

void ModifyCnt(CntInfo* c);

void SortCnt(CntInfo* c);