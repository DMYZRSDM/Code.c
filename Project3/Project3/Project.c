#define  _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include"Saolei.h"
//
//ѡ������(����������)
int main()
{
	int arr[10] = {0};
	int i = 0;
	int j = 0;
	int a = 0;
	int sz = 0;
	for (i = 0; i < 10; i++)
	{
		//��ӡ�����10������
		scanf("%d", &arr[i]);
	}
	sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz - 1; i++)
	{
		for (j = i + 1; j < sz; j++)
		{
			if (arr[i] > arr[j])
			{
				a = arr[i];
				arr[i] = arr[j];
				arr[j] = a;
			}
		}
	}
	printf("%d\n", sz);
	for(i = 0;i<sz;i++)
		printf("%d ", arr[i]);
	return 0;
}
//void menu()
//{
//	printf("****1.play  0. exit****\n");
//}
//void game()
//{
//	//�׵���Ϣ�洢
//	//1.���úõ��׵���Ϣ
//	char mine[ROWS][COLS] = { 0 };
//	//2.�Ų�����׵���Ϣ
//	char show[ROWS][COLS] = { 0 };
//	//��ʼ��
//	InitBoard(mine, ROWS, COLS,'0');
//	InitBoard(show, ROWS, COLS, '*');
//	//��ӡ����
//	DisplayBoard(mine, ROW, COL);
//	DisplayBoard(show, ROW, COL);
//	//������
//	Setmine(mine, ROW,COL);
//	DisplayBoard(mine, ROW, COL);
//	//ɨ��
//	Findmine(mine, show, ROW, COL);
//	
//}
//void test()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�Ƴ���Ϸ");
//			break;
//		default:
//			printf("�������������ѡ��");
//			break;
//		}
//	} while (input);
//}
//int main()
//{
//	test();
//	return 0;
//}
