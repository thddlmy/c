#include <stdio.h>
#pragma warning (disable : 4996)

double input();
void output(double);

int main()
{
	printf("**********������ C��� HW6**********\n");
	double F, C;
	F = input();

	C = (double)5/9*(F - 32);
	output(C);
}
double input()
{
	double F;
	printf("ȭ���µ��� �Է��ϼ��� : ");
	scanf("%lf", &F);

	return F;
}

void output(double C)
{
	printf("���� �µ��� %.2lf�Դϴ� !",C);
}