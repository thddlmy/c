#include <stdio.h>
#pragma warning (disable : 4996)

int input();

int main()
{
	int weight;
	int n = 0;
	printf("**********정혜경 C언어 HW27**********\n");
	while (n != 10 ) {
		weight = input();
		if (weight < 150)
		{
			printf("메추리알입니다........*^^*\n");
		}
		else if (weight > 500)
		{
			printf("타조알입니다.......*^^*\n");
		}
		else
		{
			n++;
			printf("현재 달걀의 수 : %d\n", n);
		}
	}
}
int input()
{
	int weight;
	printf("계란의 무게를 입력하세요 (단위 : g)");
	scanf("%d", &weight);

	return weight;
}