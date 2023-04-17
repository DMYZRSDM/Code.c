#define  _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#define  COL 3
#define  ROW 3
#include<stdlib.h>
#include<time.h>
//声明
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
//最后得出四种游戏的状态
//玩家赢 --'*'
//电脑赢 --'#'
//平局  ---'Q'
//继续  -- 'C'
char IsWin(char board[ROW][COL], int row, int col);