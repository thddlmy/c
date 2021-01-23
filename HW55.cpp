#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void random(int (*) [4], int, int);

int main()
{
	int arr[3][4];
	int size1 = sizeof(arr) / sizeof(arr[0]); //행
	int size2 = sizeof(arr) / sizeof(arr[0][0])/size1; //렬
	srand((unsigned int)time(NULL));
	printf("**********정혜경 C언어 HW55**********\n");
	random(arr, size1, size2);
}
void random(int (*arr)[4],int size1, int size2)
{
	int sum = 0;

	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			arr[i][j] = rand() % 9;
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	printf("\n");
	
	for (int i = 0; i < size1; i++)
	{
		printf("%d번 행의 합 : ", i);
		for (int j = 0; j < size2; j++)
		{
			sum += arr[i][j];
		}
		printf("%d\n", sum);
		sum = 0;
	}

	printf("\n");
	sum = 0;

	for (int i = 0; i < size2; i++)
	{
		printf("%d열의 합 : ", i);
		for (int j = 0; j < size1; j++)
		{
			sum += arr[j][i];
		}
		printf("%d\n", sum);
		sum = 0;
	}
}