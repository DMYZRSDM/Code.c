#define  _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	int sum1 = 0;
	int sum2 = 0;
	int sum = 0;
	scanf("%d%d", &sum1, &sum2);
	sum = sum1 + sum2;
	printf("sum=%d\n", sum);
	return 0;
}