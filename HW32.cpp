#include <stdio.h>
#pragma warning(disable : 4996)

int inputUInt(const char *);
double inputDouble (const char *);
int input();
int ipow(int, int);
double fpow(double, int);
 
int main()
{
	int nInt, n, NInt;
	double nDouble, NDouble;

	printf("**********������ C��� HW32**********\n");

	nInt = inputUInt("���� ���� ���� �Է��ϼ��� :");
	n = input();
	printf("%d�� %d���� %d�Դϴ� !\n", nInt, n, ipow(nInt, n));

	nDouble = inputDouble("���� �Ǽ� ���� �Է��ϼ��� : ");
	n = input();
	printf("%.2lf�� %d���� %.3lf�Դϴ� !\n", nDouble, n, fpow(nDouble, n));
	
}
int inputUInt(const char * ch)
{
	int nInt;
	printf("%s", ch);
	scanf("%d", &nInt);

	return nInt;
}
double inputDouble(const char * ch)
{
	double nDouble;
	printf("%s", ch);
	scanf("%lf", &nDouble);

	return nDouble;
}
int ipow(int nInt, int n)
{
	int res=1;

	for (int i = 0; i < n; i++)
	{
		res = res * nInt;
	}
	return res;
}
double fpow(double nDouble, int n)
{
	double res=1;
	
	for (int i = 0; i < n; i++)
	{
		res = res * nDouble;
	}
	return res;
}
int input()
{
	int n;
	printf("���� ���� �Է��ϼ��� : ");
	scanf("%d", &n);

	return n;
}
