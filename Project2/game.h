#define  _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#define  COL 3
#define  ROW 3
#include<stdlib.h>
#include<time.h>
//����
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
//���ó�������Ϸ��״̬
//���Ӯ --'*'
//����Ӯ --'#'
//ƽ��  ---'Q'
//����  -- 'C'
char IsWin(char board[ROW][COL], int row, int col);