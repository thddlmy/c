#include <stdio.h>

int main()
{
	int hours,day, min;
	double tol = 365.2422, sec, all = 365.2422;

	printf("**********정혜경 C언어 HW4**********\n");

	tol = tol * 86400;
	day = tol / 86400;
	tol = tol - day * 86400;
	hours = tol / 3600;
	tol = tol - hours * 3600;
	min = tol / 60;
	tol = tol - min * 60;
	sec = tol;

	printf("%.4lf일은 %d일 %d시간 %d분 %.2lf초 입니다 !", all, day, hours, min, sec);
}