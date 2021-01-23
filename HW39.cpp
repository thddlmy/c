#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("%2d ", j*10+i);
		}
		printf("\n");
	}
}