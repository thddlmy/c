#include <stdio.h>

int main()
{
	int hours,day, min;
	double tol = 365.2422, sec, all = 365.2422;

	printf("**********������ C��� HW4**********\n");

	tol = tol * 86400;
	day = tol / 86400;
	tol = tol - day * 86400;
	hours = tol / 3600;
	tol = tol - hours * 3600;
	min = tol / 60;
	tol = tol - min * 60;
	sec = tol;

	printf("%.4lf���� %d�� %d�ð� %d�� %.2lf�� �Դϴ� !", all, day, hours, min, sec);
}