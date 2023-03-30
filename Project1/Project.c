#define  _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int a = 0;
	int j = 0;
	int count = 0;
	for (a = 101; a < 201; a+=2)
	{

		for (j = 2; j <= (a/2); j++)
		{
			if (a % j == 0)
			{
				break;
			}
		}
		if (j > (a / 2))
		{
			count++;
			printf("% d", a);
		}	
	}
	printf("\ncount = %d\n", count);
	return 0;
}

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("% d", i);
//		i++;
//	} 
//	while (i < 11);
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (;i<10;i++)
//	{
//		for (; j < 10; j++)
//		{
//			printf("haha\n");
//		}
//		
//	}
//	return 0;
//
//}
//int main()
//{
//	int i = 1;
//	for (i = 1; i < 11; i++)
//	{
//		printf("% d", i);
//	}
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != 'EOF')
//	{
//		if (ch < '0' || ch>'9')
//		{
//			continue;
//		}
//		putchar(ch);
//	}
//	return 0;
//
//}
//int main()
//{
//	int ch = 0;
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);
//	//缓冲区还剩余一个"\n"
//	//读取一些"\n"
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}	
//	printf("请确认(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("输入失败\n");
//
//	}
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i < 11)
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("% d", i);
//		
//	}
//}
//int main()
//{
//	//switch()括号里面必须是整型
//	//case后面必须是整型常量表达式
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("周一\n");
//		break;
//	case 2:
//		printf("周二\n");
//		break;
//	case 3:
//		printf("周三\n");
//		break;
//	case 4:
//		printf("周四\n");
//		break;
//	case 5:
//		printf("周五\n");
//		break;
//	case 6:
//		printf("周六\n");
//		break;
//	case 7:
//		printf("周日\n");
//		break;
//	default:
//		printf("休息日");
//		break;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i < 101)
//	{
//		if (i % 2 == 1)
//		{
//			printf("% d", i);
//		}
//		i++;
//	}
//}
	/*while (i<101)
	{
		printf("% d", i);
		i += 2;
	}
	*/
//int main()
//{
//	int i= 1;
//	for (i = 1; i < 101; i++)
//	{
//		if (i % 2 == 1)
//		{
//			printf("% d",i);
//		}	
//	}
//	return 0;
//	
//}
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("未成年\n");
//	}
//	else if(age >= 18 && age <= 28)
//	{
//		printf("青少年");
//	}
//	else if (age > 28 && age <= 48)
//	{
//		printf("中年");
//	}
//	else if (age > 48 && age <= 60)
//	{
//		printf("中老年");
//	}
//	else
//	{
//		printf("老年");
//	}
//	return 0;
//}
//int main()
//{
//	int sum1 = 0;
//	int sum2 = 0;
//	int sum = 0;
//	scanf("%d%d", &sum1, &sum2);
//	sum = sum1 + sum2;
//	printf("sum=%d\n", sum);
//	return 0;
//}