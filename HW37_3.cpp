#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int n, day=0, sum=0;
	printf("**********������ C��� HW37**********\n");
	printf("����� �ٹ��ϼ��� �Է��ϼ��� : ");
	scanf("%d", &n);

	for (int i = 1; i <= 100; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (day != n) {
				printf("% d ", i);
				sum = sum + i;
				day++;
			}
			else
			{
				break;
			}
		}
	}
	printf("\n�ٹ��� : %d / �� ��ȭ �� : %d", n, sum);
}