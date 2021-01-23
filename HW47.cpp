#include <stdio.h>
#pragma warning (disable : 4996)

void input(double *, int);
double maxCal(double *, int);
double minCal(double *, int);
void output(double, double);

int main()
{
	double arr[5];
	double max, min;
	int size = sizeof(arr) / sizeof(arr[0]);
	printf("**********정혜경 C언어 HW47**********\n");
	input(arr, size);
	max = maxCal(arr, size);
	min = minCal(arr, size);
	output(max, min);
}
void input(double * arr, int size)
{
	printf("<숫자 5개를 입력하세요> \n");
	for (int i = 0; i <size; i++)
	{
		printf("%d번째 방의 값 : ", i);
		scanf("%lf", &arr[i]);
	}
}
double maxCal(double * arr, int size)
{
	double max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}
double minCal(double * arr, int size)
{
	double min = arr[0];
	for (int i = 0; i < size ; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}
void output(double max, double min)
{
	printf("가장 큰 값 : %.2lf\n가장 작은 값 : %.2lf\n", max, min);
}