#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int history, literature, entertainment, sum;
	double average;

	printf("**********������ C��� HW***********\n����, ����, ���� ������ �Է��ϼ���! :");
	scanf("%d %d %d", &history, &literature, &entertainment);

	sum = history + literature + entertainment;
	average = (double)sum / 3;

	printf("������ %d�̰� ����� %.2lf�Դϴ� !", sum, average);
}