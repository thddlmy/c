#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int sum, sub, mul, div, n1, n2;
	printf("**********정혜경 C언어 HW10**********\n");
	printf("두개의 정수를 입력하세요 : ");
	scanf("%d %d", &n1, &n2);

	printf("%d+%d = %d\n", n1, n2, n1 + n2);
	printf("%d-%d = %d\n", n1, n2, n1 - n2);
	printf("%d*%d = %d\n", n1, n2, n1 * n2);
	printf("%d/%d = %.2lf\n", n1, n2,(double) n1 / n2);
}