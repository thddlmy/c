#include <stdio.h>

int main()
{
	int m = 2, n =6;
	printf("**********������ C��� HW42**********\n");
	printf("<����for�� set*2 ������ ���>\n");

	for (int i = 1; i < 10; i++)
	{
		for (int j = 2; j < 6; j++)
		{
			printf("%d * %d = %-3d     ", j, i, j*i);
		}
		printf("\n");
	}
	printf("\n");
	for (int i = 1; i < 10; i++)
	{
		for (int j = 6; j < 10; j++)
		{
			printf("%d * %d = %-3d     ", j, i, j*i);
		}
		printf("\n");
	}

	printf("<����for�� set*1 ������ ���>\n");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			for (int k = m; k < n; k++)
			{
				printf("%d * %d = %-3d     ", k, j, k*j);
			}
			printf("\n");
		}
		printf("\n");
		m = 6;
		n = 10;
	}
}