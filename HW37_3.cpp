#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int n, day=0, sum=0;
	printf("**********정혜경 C언어 HW37**********\n");
	printf("기사의 근무일수를 입력하세요 : ");
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
	printf("\n근무일 : %d / 총 금화 수 : %d", n, sum);
}