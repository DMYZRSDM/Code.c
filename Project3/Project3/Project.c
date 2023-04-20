#define  _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include"Saolei.h"

void menu()
{
	printf("****1.play  0. exit****\n");
}
void game()
{
	//雷的信息存储
	//1.布置好的雷的信息
	char mine[ROWS][COLS] = { 0 };
	//2.排查出的雷的信息
	char show[ROWS][COLS] = { 0 };
	//初始化
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS, '*');
	//打印棋盘
	DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//布置雷
	Setmine(mine, ROW,COL);
	DisplayBoard(mine, ROW, COL);
	//扫雷
	Findmine(mine, show, ROW, COL);
	
}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("推出游戏");
			break;
		default:
			printf("输入错误，请重新选择");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}