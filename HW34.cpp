#include <stdio.h>
#pragma warning(disable : 4996)

int input();
double taxCalculator(int);
void output(double);

int main()
{
	int n;
	double tol;
	n = input();
	tol = taxCalculator(n);
	output(tol);
}
int input()
{
	int n;
	printf("����� �ڵ带 �Է��ϼ��� (1:������ 2:����� 3:������)\n");
	scanf("%d", &n);

	switch (n)
	{
	case 1: return 1; break;
	case 2: return 2; break;
	case 3: return 3; break;
	}
}
double taxCalculator(int n)
{
	int ton;
	double fee;
	printf("��뷮�� �Է��ϼ���(ton) :");
	scanf("%d", &ton);

	switch (n)
	{
	case 1:
	{
		fee = (double)ton * 50;
		fee = fee + (fee*0.05);
		break;
	}
	case 2:
	{
		fee = (double)ton * 40;
		fee = fee + (fee*0.05);
		break;
	}
	case 3:
	{
		fee = (double)ton * 30;
		fee = fee + (fee*0.05);
		break;
	}
	}
	return fee;
}
void output(double tol)
{
	printf("�� ������� : %.0lf��", tol);
}