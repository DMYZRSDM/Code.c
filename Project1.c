#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
//extern --�����ⲿ����
//static ���ξֲ��������ֲ��������������ڱ䳤
//static ����ȫ�ֱ������ı��˱�����������--�þ�̬��ȫ�ֱ���ֻ�����Լ���Դ�ļ��ڲ�ʹ�ã�����Դ�ļ����޷�ʹ����
//*--�����ò�����
int main()
{

}
//typedef struct {
//	float realpart;
//	float imagpart;
//}Complex;
//
//void assign(Complex* A, float real, float imag)
//{
//	A->realpart = real;
//	A->imagpart = imag;
//}
//void add(Complex* c, Complex A, Complex B)
//{
//	c->realpart = A.realpart + B.realpart;
//	c->imagpart = A.imagpart + B.imagpart;
//}
//void minus(Complex* d, Complex A, Complex B)
//{
//		d->realpart = A.realpart - B.realpart;
//		d->imagpart = A.imagpart - B.imagpart;
//}
//void multiply(Complex* e, Complex A, Complex B)
//{
//		e->realpart = A.realpart * B.realpart;
//		e->imagpart = A.imagpart * B.imagpart;
//}
//void divide(Complex* f, Complex A, Complex B)
//{
//	f->realpart = A.realpart / B.realpart;
//	f->imagpart = A.imagpart / B.imagpart;
//}
//
//int main()
//{
//	Complex z1, z2, z3, z4, z;
//	float realpart, imagpart;
//	assign(z1, 8.0, 6.0);
//	assign(z2, 4.0, 3.0);
//	add(z1, z2, z3);
//	multiply(z1, z2, z4);
//	if (divide(z4, z3, z))
//	{
//		GetReal(z, realpart);
//		Getlmag(z, imagpart);
//	}
//}
	//struct Book
	//{
	//	char name[20];
	//	short price;
	//};
	//.������--�ṹ�����.��Ա
	//->������--�ṹ��ָ��->��Ա
	//int main()
	//{
	//	struct Book b1 = { "C���Գ������" ,55 };
	//	struct Book* pb = &b1;
	//	strcpy(b1.name, "C++");
	//	printf("%s\n", (*pb).name);
	//	printf("%d\n", (*pb).price);
	//	printf("%s\n", pb->name);
	//	printf("%d\n", pb->price);
	//	/*printf("����:%s\n", b1.name);
	//	printf("�۸�:%d\n", b1.price);
	//	b1.price = 15;
	//	printf("�޸ĺ�ļ۸�:%d\n", b1.price);*/
	//	return 0;
	//}
		
	/*double d = 5.20;
	double* ph = &d;
	*ph = 2.66;*/
	//printf("%lf\n", d);
	//printf("%lf\n", *ph);
	/*char a = 'd';
	char* ch = &a;
	printf("%d\n", sizeof(ch));*/
	/*int a = 10;
	int* p = &a;
	printf("%p\n", &a);
	printf("%p\n", p);*/


//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	extern int g_val;
//	printf("%d\n", g_val);
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int num = 0;
//	int a = 100;
//	int b = 300;
//	printf("hehe\n");
//	scanf("%d%d", &num1, &num2);
//	num = Add(num1, num2);
//	num1 = Add(a, b);
//	num2= Add(30, 448);
//	printf("%d\n%d\n%d\n", num,num2,num1);
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("% d", arr[i]);
//		i++;
//	}
	
	//return 0;
	//const int n = 4;
	//char arr[] = { 'a','b','x','\0'};
	//printf("%s", arr);
	/*int num=0;
	printf("������أ����Ʊ\nnum = ");
	scanf("%d", &num);
	if (num >= 1)
	{
		printf("���������Ӯȡ�׸���\n");
	}
	else
	{
		printf("���˿ս��������ô���\n");
	}
	while (num <=20000)
	{
		printf("��һ����Ч�Ĵ���: %d\n",num);
		num++;
	}
		printf("��Ϊ��ţ����н��ʮ��ӭȢ�׸���");*/
//}