#define  _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include"add.h"
#include"game.h"
int main()
{
	int a[3][4] = { 1,2,3,4,5,6,7,8,9,0,12,11 };
	printf("%d,%d\n",a,*a);
	printf("%d,%d\n",a[0],*(a + 0));
	printf("%d,%d\n",&a[0],&a[0][0]);
	printf("%d,%d\n",a[1],a + 1);
	printf("%d,%d\n",&a[1][0],*(a + 1) + 0);
	printf("%d,%d\n",a[2],*(a + 2));
	printf("%d,%d\n",&a[2],a + 2);
	printf("%d,%d\n",a[1][0], *(*(a + 1) + 0));
	printf("%d,%d\n",*a[2], *(*(a + 2) + 0));
}
//void sort(int x[], int n)
//{
//	int i, j, k, t;
//	for (i = 0; i < n - 1; i++)
//	{
//		k = i;
//		for (j = i + 1; j < n; j++)
//		{
//			if (x[j] > x[k])
//			{
//				k = j;
//				if (k != i)
//				{
//					t = x[i]; x[i] = x[k]; x[k] = t;
//				}
//			}
//		}
//	}
//}
//int main()
//{
//	void sort(int x[], int n);
//	int i = 0;
//	int* p;
//	int a[10] = { 0 };
//	p = a;
//	printf("Please enter 10 integer numbers:\n");
//	for (i = 0; i < 10; i++)
//		scanf("%d", p++);
//	p = a;
//	sort(p, 10);
//	for (p = a, i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	printf("\n");
//	return 0;
//}
//void inv(int* x, int n)
//{
//	int* p, * i, * j;
//	int temp = 0;
//	i = x; j = x + n - 1; p = x + (n / 2);
//	for (; i <= p; i++, j--)
//	{
//		temp = *i;
//		*i = *j;
//		*j = temp;
//	}
//}
//int main()
//{
//	void inv(int* x, int n);
//	int i = 0;
//	int arr[10] = { 0 };
//	int* p = arr;
//	printf("The original array:>\n");
//	for (i = 0; i < 10; i++)
//		scanf("%d", p++);
//	printf("\n");
//	p = arr;
//	inv(p, 10);
//	printf("The array has been inverted:\n");
//	for (p = arr; p < arr + 10; p++)
//		printf("%d ", *p);
//	printf("\n");
//	return 0;
//}
//��ָ�뽻������Ԫ��
//void inv(int* x, int n)
//{
//	int* p;
//	int temp = 0;
//	int* i;
//	int* j;
//	int m = (n - 1) / 2;
//	i = x; j = x + n - 1; p = x + m;
//	for (; i <= p; i++, j--)
//	{
//		temp = *i;
//		*i = *j;
//		*j = temp;
//	}
//}
//int main()
//{
//	void inv(int* x, int n);
//	int i = 0;
//	int a[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	printf("The orginal array:>\n");
//	for (i = 0; i < 10; i++)
//		printf("%d ", a[i]);
//	printf("\nThe array has been inverted:>\n");
//	inv(a, 10);
//	for (i = 0; i < 10; i++)
//		printf("%d ", a[i]);
//	return 0;
//}
//��������Ԫ��
//void inv(int x[], int n)
//{
//	int temp = 0;
//	int j = 0;
//	for (j = 0; j < n/2; j++)
//	{
//		temp = x[j];
//		x[j] = x[n - j-1];
//		x[n - j-1] = temp;
//	}
//}
//int main()
//{
//	void inv(int x[], int n);
//	int i = 0;
//	int a[10] = { 1,3,5,6,8,2,4,7,8,10 };
//	printf("The original array:>\n");
//	for (i = 0; i < 10; i++)
//		printf("%d ", a[i]);
//	printf("\nThe array has been inverted:>\n");
//	inv(a, 10);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int a[10] = { 0 };
//	int* p = a;
//	printf("Please enter 10 integer numbers:>\n");
//	for (i = 0; i < 10; i++)
//		scanf("%d", p++);
//	p = a;
//	for (i = 0; i < 10; i++)
//		printf("%d ", *(p++));
//	printf("\n");
//	return 0;
//}
//int main()
//{
//	int a[10] = { 0 };
//	int* p;
//	int i = 0;
//	printf("Please input integer numbers:>");
//	/*for (i = 0; i < 10; i++)
//		scanf("%d", a+i);*/
//	for (p = a; p < (a + 10); p++)
//		scanf("%d", p);
//	for (p = a; p < (a + 10); p++)
//		printf("%d ", *p);
//	printf("\n");
//	return 0;
//}
//int main()
//{
//	int a[10] = { 0 };
//	int i = 0;
//	printf("Please enter 10 integer numbers:>");
//	for (i = 0; i < 10; i++)
//		scanf("%d", a + i);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(a + i));
//	}
//	printf("\n");
//	return 0;
//}
//void print1(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//			printf("%d ", (*(p + i))[j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	void print1(int(*p)[5], int x, int y);
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	int* p = arr;
//	printf("please enter 10 integer numbers:>");
//	for (i = 0; i < 10; i++)
//		scanf("%d", p++);
//	p = arr;
//	for (i = 0; i < 10; i++, p++)
//		printf("%d ", *p);
//	printf("\n");
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int* p = arr;
//	/*int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}*/
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*pa + i));
//	}
//	printf("\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);
//	}
//	return 0;
//}
//int main()
//{
//	/*char* p = "abcdef";
//	*p = 'w';
//	printf("%s\n", p);*/
//	char arr1[] = "abc";
//	char arr2[] = "abc";
//	char* p1 = "abc";
//	char* p2 = "abc";
//	//if (arr1 == arr2)
//	if(p1 = p2)
//		printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}
//void test(int** ptr)
//{
//	printf("num = %d\n", **ptr);
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}
//void print(int* p, int* sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n",*(p+i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int sz = 0;
//	sz = sizeof(arr) / sizeof(arr[0]);
//	//һ��ָ��p,��������
//	print(p, sz);
//	return 0;
//}
//int main()
//{
//	int a[10] = { 0 };
//	int i = 0;
//	printf("Please enter/input 10 integer numbers:");
//	for (i = 0; i < 10; i++)
//		scanf("%d", &a[i]);
//	for (i = 0; i < 10; i++)
//		printf("% d", a[i]);
//	printf("%\n");
//	return 0;
//}
//void swap(int* pt1, int* pt2)
//{
//	int temp = 0;
//	temp = *pt1;
//	*pt1 = *pt2;
//	*pt2 = temp;
//}
//void exchange(int* q1, int* q2, int* q3)
//{
//	void swap(int* pt1, int* pt2);
//	if (*q1 < *q2)
//		swap(q1, q2);
//	if (*q1 < *q3)
//		swap(q1, q3);
//	if (*q2 < *q3)
//		swap(q2, q3);
//}
//int main()
//{
//	void exchange(int* q1, int* q2, int* q3);
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int* p1, * p2, * p3;
//	printf("Please enter three numbers:");
//	scanf("%d,%d,%d", &a, &b, &c);
//	p1 = &a;
//	p2 = &b;
//	p3 = &c;
//	exchange(p1, p2, p3);
//	printf("The order is:%d,%d,%d\n", a, b, c);
//	return 0;
//}
//int fac(int n)
//{
//	if (n < 0)
//	{
//		printf("input error");
//	}
//	if (n == 0)
//		return 1;
//	else
//		return(n * fac(n - 1));
//}
//int main()
//{
//	int n,num;
//	printf("input an integer number:");
//	scanf("%d", &n);
//	num = fac(n);
//	printf("%d",num);
//	return 0;
//}
//int num(int x)
//{
//	/*int i;
//	int j = 10;
//	for (i = 0;i < 5;i++)
//	{
//		j += 2;
//	}
//	*/
//	int j;
//	if (x == 1)
//		j = 10;
//	else
//		j = num(x - 1) + 2;
//	return j;
//}
//int main()
//{
//	int num(int a);
//	//int age = num(5);
//	printf("%d", num(5));
//	return 0;
//}
//�ú��������� �ĸ����е����ֵ
//int max2(int c, int d)
//{
//	return(c > d ? c : d);
//}
//int max4(int a, int b, int c, int d)
//{
//	return(max2(max2(max2(a, b), c), d));
//	/*int m;
//	int max2(int a, int b);
//	m = max2(x1, x2);
//	m = max2(m, x3);
//	m = max2(m, x4);
//	return m;*/
//}
//
//int main()
//{
//	int max4(int x1, int x2, int x3, int x4);
//	int a, b, c, d, max;
//	scanf("%d%d%d%d", &a, &b, &c, &d);
//	max = max4(a, b, c, d);
//	printf("%d", max);
//	return 0;
//}
//������
//int main()
//{
//	int year = 0;
//	for (year = 1900; year <= 2000; year++)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//			printf("%d��������\n", year);
//		else
//			printf("%d�겻������\n", year);
//	}
//	return 0;
//}
//�������������Լ��
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int a = 0;
//	scanf("%d%d", &m, &n);
//	while(1)
//	{
//		if (m % n != 0)
//		{
//			a = m % n;
//			m = n;
//			n = a;
//		}
//		if (m % n == 0)
//		{
//			break;
//		}
//	}
//	
//	
//	printf("%d\n", n);
//	return 0;
//}
//����10�������������ֵ
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int max = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	
//	printf("%d\n", max);
//
//	return 0;
//}
//void menu()
//{
//	printf("******1.play    0.exit******\n");
//}
////��Ϸ�������㷨ʵ��
//void game()
//{
//	char ret = 0;
//	//����--����߳���������Ϣ
//	char board[ROW][COL] = { 0 };
//	//��ʼ�����̣�������ʼ���������е����ݾͲ��������
//	InitBoard(board, ROW, COL);
//	//��ӡ����
//	DisplayBoard(board, ROW, COL);
//	//����
//	while (1)
//	{
//		//�������
//		PlayerMove(board,ROW,COL);
//		DisplayBoard(board, ROW, COL);
//		//�ж�����Ƿ�Ӯ
//		ret = IsWin(board, ROW, COL);
//		if (ret != 'C')
//		{
//			break; 
//		}
//		//��������
//		ComputerMove(board,ROW,COL);
//		DisplayBoard(board, ROW, COL);
//		ret = IsWin(board, ROW, COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//	}
//	if (ret == '*')
//	{
//		printf("���Ӯ\n");
//	}
//	else if (ret == '#')
//	{
//		printf("����Ӯ");
//	}
//	else
//	{
//		printf("ƽ��");
//	}
//}
//void test()
//{
//	int input = 0;
//	srand((unsigned)time(NULL));
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
//		case 2:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//	} while (input);
//	
//	return 0;
//}
//int main()
//{	
//	test();
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//		printf("% d", arr[i]);
//		printf("% d", *(p + i));
//	}
//	printf("\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p == == %p\n", p + i, &arr[i]);
//	}
//	return 0;
//}
//1.&arr-&������-������������Ԫ�صĵ�ַ--��������ʾ��������-&��������ʾ����ȡ��������ĵ�ַ
//2.sizeof(arr) - sizeof(������) - ��ʾ������������Ĵ�С
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//	return 0;
//}
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != 0)
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	//strlen - ���ַ�������
//	//�ݹ� - - ģ��ʵ����strlen - �������ķ�ʽ1���ݹ�ķ�ʽ
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d ", len);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("% d", *p);
//		p += 1;
//	}
//	return 0;
//
//}
//��ι��Ұָ�룺
// 1.ָ���ʼ��
//int main()
//{
//	int b = 0;
//	int a = 10;
//	int* pa = &a;//��ʼ��
//	int* p = NULL;//NULL--������ʼ��ָ��ģ���ָ�븳ֵ
//	return 0;
//}
// 2.С��ָ��Խ��
// 3.ָ��ʹ��֮ǰ�����Ч��
//int main()
//{
//	int* p = NULL;
//	int a = 10;
//	p = &a;
//	if (p != NULL)
//	{
//		*p = 20;
//	}
//	return 0;
//}
//��a��b���ȴ��С��˳��д����(��ָ�뷽���������������)
//int main()
//{
//	int *p1, *p2, *p, a, b;
//	scanf("%d,%d", &a, &b);
//	p1 = &a;
//	p2 = &b;
//	if (a < b)
//	{
//		p = p1;
//		p1 = p2;
//		p2 = p;
//	}
//	printf("%d,%d\n", a, b);
//	printf("%d,%d\n", *p1, *p2);
//	return 0;
//}
//int main()
//{
//	int* p1, * p2, * p, a, b;
//	printf("please enter two integer numbers:\n");
//	scanf("%d,%d", &a, &b);
//	p1 = &a;
//	p2 = &b;
//	if (a < b)
//	{
//		p = p1;
//		p1 = p2;
//		p2 = p;
//	}
//		printf("%d,%d\n", *p1, *p2);
//	
//	return 0;
//}
////int main()
//{
//	int a = 10;
//	int b = 18;
//	int* num1, * num2;
//	num1 = &a;
//	num2 = &b;
//	printf("a = %d,b = %d\n", a, b);
//	printf("a = %p,b = %p\n", num1, num2);
//	printf("a = %d,b = %d\n", *num1, *num2);
//	
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//		printf("%d\n", arr[i]);
//	}
//	
//
//	return 0;
//}
//ָ�����;�����ָ����н����ò�����ʱ���ܹ����ʿռ�Ĵ�С
//int* p,*p�ܹ�����4���ֽ�
//char* p,*p�ܹ�����1���ֽ�
//double* p,*p�ܹ�����8���ֽ�
//int main()
//{
//	int a = 0x11223355;
//	int* pa = &a;
//	*pa = 0;
//	char* pc = &a;
//	*pc = 0;
//	printf("%p\n", pa);
//	printf("%p\n", pc);
//	return 0;
//}
//����ı��ʽ
//int main()
//{
//	int i = 10;
//	i = (++i)+(i++)+(i++);
//	printf("i = %d\n", i);
//	return 0;
//}
//���������ǰ��ձ������������͵ķ���λ��������
//int main()
//{
//	char c = 1;
//	printf("%u\n", (int)sizeof(c));
//	printf("%u\n", (int)sizeof(+c));
//	printf("%u\n", (int)sizeof(!c));
//	return 0;
//}
//����һ���ṹ�����
//struct Stu
//{
//	//��Ա����
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()
//{
//	int a = 10;
//	//ʹ��Struct Stu������ʹ�����һ��ѧ������s1�����ҳ�ʼ��
//	struct Stu s1 = { "����",20,"2019191919100" };
//	struct Stu* ps = &s1;
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	printf("%s\n", (*ps).name);
//	printf("%d\n", (*ps).age);
//	printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);
//	//�ṹ�����.��Ա��
//	return 0;
//}
//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//���ú�����ʱ���()���Ǻ������ò�����
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}
//���鴫�Σ���������Ԫ�صĵ�ַ
//void test1(int arr[])
//{
//	printf("%d\n", (int)sizeof(arr));
//}
//void test2(char ch[])
//{
//	printf("%d\n", (int)sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", (int)sizeof(arr));
//	printf("%d\n", (int)sizeof(ch));
//	test1(arr);
//	test2(ch);
//
//	return 0;
//}
//��λȡ��
//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);
//}
//��һ�������洢���ڴ��еĶ�������1�ĸ���
//����1.���о�����,���Ǹ������󲻳�����
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int count = 0;
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}
//	printf("��������1�ĸ���Ϊ%d\n", count);
//	return 0;
//}
//����2.
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}
// ����3��
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int i = 0;
//	int count = 0;
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);
//	}
//	printf("%d\n", count);
//	return 0;
//}
//�����õ�������ʱ����������a��b��ֵ
//1.��a����b����ʱ���������������
//int main()
//{
//	/*int a = 3;
//	int b = 5;
//	a = a + b;
//	b = a - b;
//	a = a - b;*/
//	return 0;
//}
//2.�ò�������ʾ�ȽϺ�
//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a ^ b;
//	b = b ^ a;
//	a = a ^ b;
//	printf("a = %d,b = %d\n", a,b);
//	
//	return 0;
//
//}
//int main()
//{
//	//
//	//�����Ķ����Ʊ�ʾ�У�ԭ�룬���룬����
//	//�洢���ڴ���ǲ��룬��ӡ��������ԭ��
//	int a = -16;
//	//int b = a >> 3;//��������
//	//printf("%d\n", b);
//	int b = a << 1;
//	printf("%d\n", b);
//	int c = a ^ b;
//	printf("%d\n", a);
//	printf("%d\n", c);
//	return 0;
//}
//���������
//int main()
//{
//	double a = 5 % 2;
//	printf("%lf\n", a);
//	return 0;
//}
//sizeof(������)�����������������Ĵ�С
//&��������ȡ����������ĵ�ַ
//int main()
//{
//	int arr[] = {1,2,3,4};
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//
//	return 0;
//}
////ð������
//void bubble_sort(int arr[], int sz)
//{
	//ȷ��ð�����������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//������һ��Ҫ����������Ѿ�����
//		//ÿһ��ð������(�Ǳ仯��)
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tem = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tem;
//				flag == 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//��arr���������ų�����
//	//arr�����飬���Ƕ�����arr���д��Σ�ʵ���ϴ��ݹ�ȥ����arr�������Ԫ�ص�ַ��Ӧ���ڴ���֮ǰ������������С��Ȼ���ٴ��Σ�Ҳ������int*����char*�����Σ����������鳤��ʱ�ᷢ������
//	bubble_sort(arr, sz);//ð������
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//��ӡ��ά����
//int main()
//{
//	int arr[3][4] = { {1,2},{3,4,5,6} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n",i,j, &arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//%p-��ӡ��ַ
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = 0;
//	sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n",i, &arr[i]);
//	}
//}
//����
//int main()
//{
//	//����һ������-�������-10��
//	int arr[] = { 1,2,3 };
//	char arr2[6] = { 'a','b',0};
//	char arr3[] = "abc";
//	//int len = strlen(arr2);
//	//int len2 = strlen(arr3);
//	printf("%d\n", (int)sizeof(arr));
//	//printf("%d\n", len2);
//	return 0;
//}
//������n��쳲���������
//int count = 0;(Ч�ʵ�)
//int Fac2(int n)
//{
//	if (n == 5)//���Ե�5��쳲��������ļ������
//	{
//		count++;
//	}
//	if (n <= 2)
//		return 1;
//	else
//		return (Fac2(n - 1) + Fac2(n - 2));
//	
//}
//Ч�ʸ�
//int Fac2(int n)
//{
//	
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	 
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//TDD--������������
//	ret = Fac2(n);
//	printf("%d\n", ret);
//}
//int Fac1(int n)
//{
//	if (n <=1)
//		return 1;
//	else
//		return n * Fac1(n - 1);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac1(n);//ѭ���ķ�ʽ
//	printf("%d\n", ret);
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 1;
//	scanf("%d", &n);
//	for (i = 1; i<=n; i++)
//	{
//		sum *= i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//�ú������ֲ���
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (k > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//			return mid;
//	}
//	return -1;
//}
//int main()
//{
//	//��һ�����������в��Ҿ����ĳ����ֵ
//	//����ҵ��˷�����������±꣬���򷵻�-1
//	//������һ��������ĳ��ȣ������ﱾ����arr��һ��ָ��
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���:%d\n", ret);
//	}
//	return 0;
//}
//�ú���������
//int is_leap_year(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (1 == is_leap_year(year))
//		{
//			count++;
//			printf("% d", year);
//		}
//	}
//	printf("\ncount = %d", count);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	
//	for (a = 101; a < 201; a+=2)
//	{
//		int j = 0;
//		for (j = 2; j<=(a/2); j++)
//		{
//			if (a % j == 0)
//			{
//				break;
//			}	
//		}
//		if (j > (a / 2))
//		{
//			printf("% d", a);
//		}
//			
//	}
//	return 0;
//}
//void Swap(int *x, int *y)
//{
//	int tem = 0;
//	 tem = *x;
//	 *x = *y;
//	 *y = tem;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d,b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}
//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//}
//int main()
//{
//	//memset--(void*ptr,int value,size_t num)--���ڴ���ǰnum���ַ�ת��valueֵ��
//	char arr[] = "hello world";
//	memset(arr, '*',6);
//	printf("%s\n", arr);
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int sum = Add(3, 5);
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60
//	//system()--ִ��ϵͳ����
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬һ���ӹػ���һ���ӹػ�\n");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//void menu()
//{
//	printf("**********************\n");
//	printf("***1.play game*2.exit*\n");
//	printf("**********************\n");
//}
////RAND_MAX(ȡֵ��Χ��0-32767)
////ʱ�������ǰ�������ʱ��-�����ʹ�õ���ʼʱ��1970.1.1.0:0:0=(xxx)��
////��ʱ����������������������ʼ��
////time_t time(time_t *timer)
////time_t
//void game()
//{
//	//1.����һ�������
//	int ret = 0;
//	int guess = 0;
//	ret = rand()%100+1;
//	//printf("%d\n",ret);
//	//2.������
//	while (1)
//	{
//		printf("������֣�>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´��ˣ���С�˲�\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С�ˣ������˲�\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 2:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}
//����Ļ�����9*9�˷��ھ���
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int z = 0;
//	for (m = 1; m < 10; m++)
//	{
//		for (n = 1; n < 10; n++)
//		{
//			if (m >= n)
//			{
//				z = m * n;
//				printf("% d*%d=%2d", m,n,z);	
//			}
//		}
//		if (m < n)
//		{
//			printf("\n");
//		}
//	}
//	return 0;
//}
//�������е���Сֵ
//int main()
//{
//	int arr[] = { -1,-20,-3,-54,-5,-4,-7,-8,-9,-10 };
//	int min = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (min > arr[i])
//		{
//			min = arr[i];
//		}
//	}
//	printf("min = %d\n", min);
//	return 0;
//}
//�������е����ֵ
//int main()
//{
//	int arr[] = { -1,-20,-3,-54,-5,-4,-7,-8,-9,-10 };
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int one = 1;
//	for (i = 1; i < 101; i++)
//	{
//		sum += one * 1.0/i;
//		one = -one;
//	}
//	printf("sum = %lf\n", sum);
//	return 0;
//}
//int main()
//{
//	double i = 0;
//	double n = 0;
//	double sum1 = 0;
//	double sum2 = 0;
//	double sum = 0;
//	for (i = 1; i < 101; i += 2)
//	{
//		sum1 += 1.0/i;
//	}
//	for (n = 2; n < 101; n += 2)
//	{
//		sum2 += 1.0/n;
//	}
//	sum = sum1 - sum2;
//	printf("sum = %lf\n", sum);
//
//	return 0;
//}
//int main()
//{
//	char arr[] = "hello";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//}
//��100���ڵ������а���9�ĸ���
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i < 101; i++)
//	{
//		if (i % 10 == 9)
//		{
//			printf("% d", i);
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			printf("% d", i);
//			count++;
//		}
//		
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//������
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 2; i < 101; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����(���ַ���)
//		//1.�Գ���(����2->i-1)
//		int j = 0;
//		for (j = 2; j <=(i/2); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j >(i/2))
//		{
//			count++;
//			printf("% d", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//������ĸ��������
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�Ƿ�Ϊ����
//		//1.�ܱ�4�������Ҳ��ܱ�100����
//		//2.�ܱ�400����
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("% d", year);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//�������������Լ��(շת�����)
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	scanf("%d%d", &m, &n);
//	//if (m >= n)
//	//{
//		while (i = m % n)
//		{
//			m = n;
//			n = i;
//		}
//		printf("%d\n", n);
//	//}
	//else
	/*{
		while (n % m)
		{
			i = n % m;
			n = m;
			m = i;
		}*/
		//printf("%d\n", m);
	//}
	
	
	//return 0;
//}
//int main()
//{
//	int i = 1;
//	for (i = 1; i < 101; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("% d", i);
//		}
//		
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	//�㷨ʵ��
//	//a���b��֮��c��С
//	if (a < b)
//	{
//		int ret = a;
//		int a = b;
//		int b = ret;
//	}
//	if (a < c)
//	{
//		int ret = a;
//		a = c;
//		c = ret;
//	}
//	if (b < c)
//	{
//		int ret = b;
//		b = c;
//		c = ret;
//	}
//		printf("%d %d %d\n", a,b,c);
//	
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)//==���������Ƚ�����
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������");
//		}
//	}
//	if (i == 3)
//	{
//		printf("������������������˳�����\n");
//	}
//	return 0;
//}
//�����ʽѰ�������е�ĳ����
//int main()
//{
//	char arr1[] = "welcome to bit!!!!";
//	char arr2[] = "##################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//��Ϣ1S
//		Sleep(1000);
//		system("cls");//ִ��ϵͳ�����һ������-cls--�����Ļ
//		left++;
//		right--;
//
//	}
//	printf("%s\n", arr2);
//	return 0;
//
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	//дһ�����룬��arr����(�����)�ҵ�7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i <=sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;
//		}
//		if (sz == i)
//		{
//			printf("�Ҳ���\n");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	//scanf("%d", &n);
//	//do
//	//{
//		for(i=1;i<=10;i++)
//		{
//			ret *= i;
//			sum += ret;
//		}
//	//} while (i < 4);
//	printf("%d", sum);
//
//	return 0;
//}
//����N�Ľ׳�
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for(i=1;i<=n;i++)
//	{
//		ret *= i;
//	}
//	
//	printf("%d", ret);
//
//	return 0;
//}