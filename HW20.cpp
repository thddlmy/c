#include <stdio.h>
#pragma warning(disable : 4996)

int input();
double wageCalculator(int);
double taxCalculator(double);
void output(int, int);

int main()
{
	int time;
	double tolWage;
	double tax;

	printf("**********정혜경 C언어 HW20**********\n");
	time = input();
	tolWage = wageCalculator(time);
	tax = taxCalculator(tolWage);
	output(tolWage, tax);
}

int input()
{
	int time;
	printf("1주일간의 근무시간을 입력하세요 : ");
	scanf("%d", &time);

	return time;
}

double wageCalculator(int time)
{
	double extraTime;
	double wage;
	if (time <= 40)
	{
		wage = time * 3000;
	}
	else
	{
		extraTime = time - 40;
		wage = 40 * 3000 + extraTime * 1.5 * 3000;
	}
	return wage;
}
double taxCalculator(double tolWage)
{
	double tax, extraWage;
	if (tolWage <= 100000)
	{
		tax = tolWage * 0.15;
	}
	else
	{
		extraWage = tolWage - 100000;
		tax = 0.15 * 100000 + extraWage * 0.25;
	}
	return tax;
}
void output(int tolWage, int tax)
{
	printf("총수입 : %d\n세 금 : %d\n실수입 : %d", tolWage, tax, tolWage - tax);
}