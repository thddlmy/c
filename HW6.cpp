#include <stdio.h>
#pragma warning (disable : 4996)

double input();
void output(double);

int main()
{
	printf("**********정혜경 C언어 HW6**********\n");
	double F, C;
	F = input();

	C = (double)5/9*(F - 32);
	output(C);
}
double input()
{
	double F;
	printf("화씨온도를 입력하세요 : ");
	scanf("%lf", &F);

	return F;
}

void output(double C)
{
	printf("섭씨 온도는 %.2lf입니다 !",C);
}