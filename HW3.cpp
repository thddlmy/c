#include <stdio.h>
 
int HW3()
{
	int tol = 54321, hours, min, firstSec;

	printf("**********������ C��� HW3**********");
	firstSec = tol;
	hours = tol / 3600;
	tol = tol - 3600 * hours;
	min = tol / 60;
	tol = tol - 60 * min;

	printf("%d�ʴ� %d��,%d��,%d�� �Դϴ� !", firstSec, hours, min, tol);
	return 0;
 }