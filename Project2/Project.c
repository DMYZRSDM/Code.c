#define  _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include"add.h"

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
//	//�洢���ڴ���ǲ���
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
//	//ȷ��ð�����������
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
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//��arr���������ų�����
//	//arr�����飬���Ƕ�����arr���д��Σ�ʵ���ϴ��ݹ�ȥ����arr�������Ԫ�ص�ַ��Ӧ���ڴ���֮ǰ������������С��Ȼ���ٴ��Σ�Ҳ������Int*����char*�����Σ����������鳤��ʱ�ᷢ������
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
//	for (i = 101; i < 201; i+=2)
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