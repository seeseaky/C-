#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


//定义棋盘默认大小
#define ROW 3
#define COL 3

void InBd(char board[][COL], int row, int col);

void PrBd(char board[][COL], int row, int col);

void Play(char board[ROW][COL], int row, int col);

void Cmp(char board[ROW][COL], int row, int col);

char Win(char board[][COL], int row, int col);