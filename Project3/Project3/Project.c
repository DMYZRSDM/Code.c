#define  _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include"Saolei.h"
//
//��һ��3*4�Ķ�ά����Ԫ���е����ֵ(��������Ϊ������������ʱ�򣬵��õ�������׵�ַ����������ͬʱ����ôʵ�κ��β�N��Ԫ�صĵ�ַ��ͬ���ı��βε�����ʵ�ε���Ҳ��Ӧ�ĸı�)
int max_value(int a[][4])
{
	int i, j, max;
	max = a[0][0];
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (max < a[i][j])
			{
				max = a[i][j];
			}
		}
	}
	return(max);
}
int main()
{
	int max_value(int arr[][4]);
	int arr[3][4] = { {2,3,34,54},{234,123,1234,45},{4,3,1,5} };
	printf("Max value is %d\n", max_value(arr));
	return 0;
}

//int main()
//{
//	int arr[3][4] = { {2,3,34,54},{234,123,1234,45},{4,3,1,5} };
//	int i, j;
//	int max = arr[0][0];
//	printf("Please input 3*4 array:>\n");
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			//scanf("%d", &arr[i][j]);
//			if (max < arr[i][j])
//			{
//				max = arr[i][j];
//			}
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	printf("%d", max);
//	return 0;
//}
// ����������ƽ��ֵ
//float aver(float score[], int n)
//{
//	int i;
//	float sum = 0;
//	float aver = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%f", &score[i]);
//		sum += score[i];
//	}
//	aver = sum / n;
//	return(aver);
//}
//int main()
//{
//	float aver(float score[], int n);//��������
//	float score[5];
//	int n = 0;
//	printf("Please input n scores:\n");
//	float average = aver(score,5);
//	printf("%f", average);
//	return 0;
//}
//float average(float array[10])
//{
//	float aver;
//	float sum = 0;
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		sum += array[i];
//	}
//	aver = sum / 10;
//	return(aver);
//}
//int main()
//{
//	float average(float array[10]);//��������
//	float score[10] = { 0 }, aver;
//	int i;
//	printf("Please input 10 scores:\n");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%f", &score[i]);
//	}
//	printf("\n");
//	aver = average(score);
//	printf("average score is %5.2f\n", aver);
//	return 0;
//}
//int max_(int x, int y)
//{
//	return((x >= y ? x : y));
//}
//int main()
//{
//	int max_(int x, int y);
//	int i, sz, M, max;
//	int arr[10] = { 0 };
//	max = arr[0];
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("Please input 10 number:>\n");
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 1,M=0; i < sz; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//			M = i;
//		}
//		//if (max < max_(arr[i], max))//���max_�������ص�ֵ����max
//		//{
//		//	max = max_(arr[i], max);//�ѷ���ֵ����max
//		//	M = i;//�Ѵ�Ԫ��������±������
//		//}
//	}
//	printf("The  max number of array is %d\n,the array index is %d", max,M);
//	return 0;
//}
// ��ŵ������
//void move(char x, char y)
//{
//	printf("%c->%c\n", x, y);
//}
//void hanoi(int n, char one, char two, char three)
//{
//	void move(char x,char y);//��������
//	if (n == 1)
//		move(one, three);
//	else
//	{
//		hanoi(n - 1, one, three, two);
//		move(one, three);
//		hanoi(n - 1, two, one, three);
//	}
//}
//int main()
//{
//
//	int m;
//	printf("please input the number of diskes:>");
//	scanf("%d", &m);
//	printf("The step to move %d diskes:\n", m);
//	hanoi(m, 'A','B','C');
//	return 0;
//}
// 
//ѡ������(����������)
//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	int j = 0;
//	int a = 0;
//	int sz = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//��ӡ�����10������
//		scanf("%d", &arr[i]);
//	}
//	sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = i + 1; j < sz; j++)
//		{
//			if (arr[i] > arr[j])
//			{
//				a = arr[i];
//				arr[i] = arr[j];
//				arr[j] = a;
//			}
//		}
//	}
//	printf("%d\n", sz);
//	for(i = 0;i<sz;i++)
//		printf("%d ", arr[i]);
//	return 0;
//}
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
