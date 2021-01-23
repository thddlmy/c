#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int history, literature, entertainment, sum;
	double average;

	printf("**********정혜경 C언어 HW***********\n역사, 문학, 예능 점수를 입력하세요! :");
	scanf("%d %d %d", &history, &literature, &entertainment);

	sum = history + literature + entertainment;
	average = (double)sum / 3;

	printf("총점은 %d이고 평균은 %.2lf입니다 !", sum, average);
}