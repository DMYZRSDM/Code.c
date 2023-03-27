#define  _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int arr[] = { '1','2','3' };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);
}
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
//	int k = 77;
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