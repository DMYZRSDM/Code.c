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
//用指针交换数组元素
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
//交换数组元素
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
//	//一级指针p,传给参数
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
//用函数调用求 四个数中的最大值
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
//求闰年
//int main()
//{
//	int year = 0;
//	for (year = 1900; year <= 2000; year++)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//			printf("%d年是闰年\n", year);
//		else
//			printf("%d年不是闰年\n", year);
//	}
//	return 0;
//}
//求两个数的最大公约数
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
//输入10个数，求其最大值
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
////游戏的整个算法实现
//void game()
//{
//	char ret = 0;
//	//数组--存放走出的棋盘信息
//	char board[ROW][COL] = { 0 };
//	//初始化棋盘（若不初始化，数组中的内容就不能清除）
//	InitBoard(board, ROW, COL);
//	//打印棋盘
//	DisplayBoard(board, ROW, COL);
//	//下棋
//	while (1)
//	{
//		//玩家下棋
//		PlayerMove(board,ROW,COL);
//		DisplayBoard(board, ROW, COL);
//		//判断玩家是否赢
//		ret = IsWin(board, ROW, COL);
//		if (ret != 'C')
//		{
//			break; 
//		}
//		//电脑下棋
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
//		printf("玩家赢\n");
//	}
//	else if (ret == '#')
//	{
//		printf("电脑赢");
//	}
//	else
//	{
//		printf("平局");
//	}
//}
//void test()
//{
//	int input = 0;
//	srand((unsigned)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 2:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
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
//1.&arr-&数组名-数组名不是首元素的地址--数组名表示整个数组-&数组名表示的是取整个数组的地址
//2.sizeof(arr) - sizeof(数组名) - 表示的是整个数组的大小
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
//	//strlen - 求字符串长度
//	//递归 - - 模拟实现了strlen - 计数器的方式1，递归的方式
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
//如何规避野指针：
// 1.指针初始化
//int main()
//{
//	int b = 0;
//	int a = 10;
//	int* pa = &a;//初始化
//	int* p = NULL;//NULL--用来初始化指针的，给指针赋值
//	return 0;
//}
// 2.小心指针越界
// 3.指针使用之前检查有效性
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
//把a和b按先大后小的顺序写出来(用指针方法来处理这个问题)
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
//指针类型决定了指针进行解引用操作的时候，能够访问空间的大小
//int* p,*p能够访问4个字节
//char* p,*p能够访问1个字节
//double* p,*p能够访问8个字节
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
//错误的表达式
//int main()
//{
//	int i = 10;
//	i = (++i)+(i++)+(i++);
//	printf("i = %d\n", i);
//	return 0;
//}
//整形提升是按照变量的数据类型的符号位来提升的
//int main()
//{
//	char c = 1;
//	printf("%u\n", (int)sizeof(c));
//	printf("%u\n", (int)sizeof(+c));
//	printf("%u\n", (int)sizeof(!c));
//	return 0;
//}
//创建一个结构体变量
//struct Stu
//{
//	//成员变量
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()
//{
//	int a = 10;
//	//使用Struct Stu这个类型创建了一个学生对象s1，并且初始化
//	struct Stu s1 = { "张三",20,"2019191919100" };
//	struct Stu* ps = &s1;
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	printf("%s\n", (*ps).name);
//	printf("%d\n", (*ps).age);
//	printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);
//	//结构体变量.成员名
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
//	//调用函数的时候的()就是函数调用操作符
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}
//数组传参，传的是首元素的地址
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
//按位取反
//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);
//}
//求一个整数存储在内存中的二进制中1的个数
//方法1.（有局限性,若是负数就求不出来）
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
//	printf("二进制中1的个数为%d\n", count);
//	return 0;
//}
//方法2.
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
// 方法3：
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
//不能用第三个临时变量，交换a和b的值
//1.当a或者b过大时容易溢出，有限制
//int main()
//{
//	/*int a = 3;
//	int b = 5;
//	a = a + b;
//	b = a - b;
//	a = a - b;*/
//	return 0;
//}
//2.用操作符表示比较好
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
//	//整数的二进制表示有：原码，反码，补码
//	//存储到内存的是补码，打印出来的是原码
//	int a = -16;
//	//int b = a >> 3;//算术右移
//	//printf("%d\n", b);
//	int b = a << 1;
//	printf("%d\n", b);
//	int c = a ^ b;
//	printf("%d\n", a);
//	printf("%d\n", c);
//	return 0;
//}
//操作符详解
//int main()
//{
//	double a = 5 % 2;
//	printf("%lf\n", a);
//	return 0;
//}
//sizeof(数组名)，计算的是整个数组的大小
//&数组名，取出的是数组的地址
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
////冒泡排序
//void bubble_sort(int arr[], int sz)
//{
	//确定冒泡排序的趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//假设这一趟要排序的数据已经有序
//		//每一趟冒泡排序(是变化的)
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
//	//对arr进行排序，排成升序
//	//arr是数组，我们对数组arr进行传参，实际上传递过去的是arr数组的首元素地址，应该在传参之前就算出来数组大小，然后再传参，也不能用int*或者char*来传参，这样求数组长度时会发生错误
//	bubble_sort(arr, sz);//冒泡排序
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//打印二维数组
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
//%p-打印地址
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
//数组
//int main()
//{
//	//创建一个数组-存放整型-10个
//	int arr[] = { 1,2,3 };
//	char arr2[6] = { 'a','b',0};
//	char arr3[] = "abc";
//	//int len = strlen(arr2);
//	//int len2 = strlen(arr3);
//	printf("%d\n", (int)sizeof(arr));
//	//printf("%d\n", len2);
//	return 0;
//}
//描述第n个斐波那契数列
//int count = 0;(效率低)
//int Fac2(int n)
//{
//	if (n == 5)//测试第5个斐波那契数的计算次数
//	{
//		count++;
//	}
//	if (n <= 2)
//		return 1;
//	else
//		return (Fac2(n - 1) + Fac2(n - 2));
//	
//}
//效率高
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
//	//TDD--测试驱动开发
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
//	ret = Fac1(n);//循环的方式
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
//用函数二分查找
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
//	//在一个有序数组中查找具体的某个数值
//	//如果找到了返回这个数的下标，否则返回-1
//	//不能用一下求数组的长度，在这里本质上arr是一个指针
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是:%d\n", ret);
//	}
//	return 0;
//}
//用函数求闰年
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
//	//memset--(void*ptr,int value,size_t num)--把内存块的前num个字符转到value值中
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
//	//system()--执行系统命令
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，一分钟关机，一分钟关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "你是猪") == 0)
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
////RAND_MAX(取值范围在0-32767)
////时间戳：当前计算机的时间-计算机使用的起始时间1970.1.1.0:0:0=(xxx)秒
////拿时间戳来设置随机数的生成起始点
////time_t time(time_t *timer)
////time_t
//void game()
//{
//	//1.生成一个随机数
//	int ret = 0;
//	int guess = 0;
//	ret = rand()%100+1;
//	//printf("%d\n",ret);
//	//2.猜数字
//	while (1)
//	{
//		printf("请猜数字：>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了，往小了猜\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了，往大了猜\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
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
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 2:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}
//在屏幕上输出9*9乘法口诀表
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
//求数组中的最小值
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
//求数组中的最大值
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
//求100以内的数字中包含9的个数
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
//求素数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 2; i < 101; i++)
//	{
//		//判断i是否为素数(两种方法)
//		//1.试除法(产生2->i-1)
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
//求闰年的个数和年份
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是否为闰年
//		//1.能被4整除并且不能被100整除
//		//2.能被400整除
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("% d", year);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//求两个数的最大公约数(辗转相除法)
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
//	//算法实现
//	//a最大，b次之，c最小
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
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)//==不能用来比较数组
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码输入均错误，退出程序\n");
//	}
//	return 0;
//}
//用最简式寻找数组中的某个数
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
//		//休息1S
//		Sleep(1000);
//		system("cls");//执行系统命令的一个函数-cls--清空屏幕
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
//	//写一个代码，在arr数组(有序地)找到7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i <=sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//		if (sz == i)
//		{
//			printf("找不到\n");
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
//计算N的阶乘
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