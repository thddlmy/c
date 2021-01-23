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
	printf("사용자 코드를 입력하세요 (1:가정용 2:상업용 3:공업용)\n");
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
	printf("사용량을 입력하세요(ton) :");
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
	printf("총 수도요금 : %.0lf원", tol);
}