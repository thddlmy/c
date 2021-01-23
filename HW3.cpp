#include <stdio.h>
 
int HW3()
{
	int tol = 54321, hours, min, firstSec;

	printf("**********정혜경 C언어 HW3**********");
	firstSec = tol;
	hours = tol / 3600;
	tol = tol - 3600 * hours;
	min = tol / 60;
	tol = tol - 60 * min;

	printf("%d초는 %d시,%d분,%d초 입니다 !", firstSec, hours, min, tol);
	return 0;
 }