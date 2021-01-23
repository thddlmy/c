#include <stdio.h>
#pragma warning(disable : 4996)

int main()
{
	double height;
	double sum = 0;

	for (int i = 0; i < 5; i++)
	{
		printf("%d번 학생의 키는? : ", i+1);
		scanf("%lf", &height);
		sum = sum + height;
	}
	printf("다섯 명의 평균 키는 %.1lf입니다 !", sum/5);
}