#include <stdio.h>
#pragma warning (disable : 4996)

int input();

int main()
{
	int weight;
	int n = 0;
	printf("**********������ C��� HW27**********\n");
	while (n != 10 ) {
		weight = input();
		if (weight < 150)
		{
			printf("���߸����Դϴ�........*^^*\n");
		}
		else if (weight > 500)
		{
			printf("Ÿ�����Դϴ�.......*^^*\n");
		}
		else
		{
			n++;
			printf("���� �ް��� �� : %d\n", n);
		}
	}
}
int input()
{
	int weight;
	printf("����� ���Ը� �Է��ϼ��� (���� : g)");
	scanf("%d", &weight);

	return weight;
}