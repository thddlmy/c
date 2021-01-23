#include <stdio.h>
#pragma warning (disable:4996)

void swap(int *, int);

int main()
{
	int number[] = { 1, 2, 3, 4, 5 };
	int size = sizeof(number) / sizeof(number[0]);

	printf("**********정혜경 C언어 HW49**********\n처음 배열에 저장된 값 : ");
	for (int i = 0; i < size; i++)
	{
		printf("%2d ", number[i]);
	}
	swap(number, size);
	printf("\n바뀐 배열에 저장된 값 : ");
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