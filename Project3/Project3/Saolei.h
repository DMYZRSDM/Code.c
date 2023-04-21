#define  _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 5
#define COL 5
#define ROWS ROW+2
#define COLS COL+2
#define EASY_count 10
InitBoard(char board[ROWS][COLS], int rows, int cols,char set);
void DisplayBoard(char board[ROWS][COLS], int row, int col);
void Setmine(char board[ROWS][COLS],int row,int col);
void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);