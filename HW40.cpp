#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n;
	printf("**********정혜경 C언어 HW40**********\n");
	printf("출력라인 수를 입력하세요 : ");
	scanf("%d", &n);

	for (int i = 1 ; i <= n ; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		for (int j = 1; j <= n*2 - 2 * i; j++)
		{
			printf(" ");
		}
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
