#include <stdio.h>
#pragma warning (disable:4996)

void swap(int *, int);

int main()
{
	int number[] = { 1, 2, 3, 4, 5 };
	int size = sizeof(number) / sizeof(number[0]);

	printf("**********������ C��� HW49**********\nó�� �迭�� ����� �� : ");
	for (int i = 0; i < size; i++)
	{
		printf("%2d ", number[i]);
	}
	swap(number, size);
	printf("\n�ٲ� �迭�� ����� �� : ");
	for (int i = 0 ; i < size; i++)
	{
		printf("%2d ", number[i]);
	}

}
void swap(int * number, int size)
{
	int temp;

	for (int i = 0 ;i <= size / 2; i++)
	{
		temp = number[i];
		number[i] = number[size - 1- i];
		number[size - 1- i] = temp;
	}
}