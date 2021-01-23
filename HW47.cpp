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
	printf("**********������ C��� HW47**********\n");
	input(arr, size);
	max = maxCal(arr, size);
	min = minCal(arr, size);
	output(max, min);
}
void input(double * arr, int size)
{
	printf("<���� 5���� �Է��ϼ���> \n");
	for (int i = 0; i <size; i++)
	{
		printf("%d��° ���� �� : ", i);
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
	printf("���� ū �� : %.2lf\n���� ���� �� : %.2lf\n", max, min);
}