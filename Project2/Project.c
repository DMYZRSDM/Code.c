#define  _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include"add.h"

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
int main()
{
	int num = 0;
	scanf("%d", &num);
	int i = 0;
	int count = 0;
	while (num)
	{
		count++;
		num = num & (num - 1);
	}
	printf("%d\n", count);
	return 0;
}
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
//	//存储到内存的是补码
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
//	//确定冒泡排序的趟数
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
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//对arr进行排序，排成升序
//	//arr是数组，我们对数组arr进行传参，实际上传递过去的是arr数组的首元素地址，应该在传参之前就算出来数组大小，然后再传参，也不能用Int*或者char*来传参，这样求数组长度时会发生错误
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
//	for (i = 101; i < 201; i+=2)
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