#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int sum, sub, mul, div, n1, n2;
	printf("**********������ C��� HW10**********\n");
	printf("�ΰ��� ������ �Է��ϼ��� : ");
	scanf("%d %d", &n1, &n2);

	printf("%d+%d = %d\n", n1, n2, n1 + n2);
	printf("%d-%d = %d\n", n1, n2, n1 - n2);
	printf("%d*%d = %d\n", n1, n2, n1 * n2);
	printf("%d/%d = %.2lf\n", n1, n2,(double) n1 / n2);
}