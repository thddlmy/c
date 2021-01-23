#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void random(int(*)[5], int, int);

int main()
{
	int arr[5][5];
	int row = sizeof(arr) / sizeof(arr[0]); //행
	int col = sizeof(arr) / sizeof(arr[0][0]) / row; //렬
	srand((unsigned int)time(NULL));
	printf("**********정혜경 C언어 HW56**********\n");
	random(arr, row, col);

}
void random(int(*arr)[5], int row, int col)
{
	int sum1 = 0;
	int sum2 = 0;
	int sum3 = 0;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 20 + 1;
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (i == j)
			{
				sum1 += arr[i][j];
			}
		}
	}
	printf("sum1 = %d\n", sum1);

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (i > j)
			{
				sum2 += arr[i][j];
			}
			else if (i < j)
			{
				sum3 += arr[i][j];
			}
		}
	}
	printf("sum2 = %d\n", sum2);
	printf("sum3 = %d\n", sum3);
}