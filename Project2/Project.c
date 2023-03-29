#define  _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main()
{
	char input[20] = { 0 };
	//shutdown -s -t 60
	//system()--执行系统命令
	system("shutdown -s -t 60");
again:
	printf("请注意，一分钟关机，一分钟关机\n");
	scanf("%s", input);
	if (strcmp(input, "你是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}
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