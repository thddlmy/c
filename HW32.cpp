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

	printf("**********정혜경 C언어 HW32**********\n");

	nInt = inputUInt("양의 정수 밑을 입력하세요 :");
	n = input();
	printf("%d의 %d승은 %d입니다 !\n", nInt, n, ipow(nInt, n));

	nDouble = inputDouble("양의 실수 밑을 입력하세요 : ");
	n = input();
	printf("%.2lf의 %d승은 %.3lf입니다 !\n", nDouble, n, fpow(nDouble, n));
	
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
	printf("양의 승을 입력하세요 : ");
	scanf("%d", &n);

	return n;
}
