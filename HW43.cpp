#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)

int input();
int primeNumber(int);

int main()
{
	int n, count = 0, ncount = 0;;
	printf("**********정혜경 C언어 HW43**********\n");
	n = input();
	printf("%d~%d까지의 소수 값은 다음과 같습니다.\n", 1, n);
	for (int i = 2; i <= n; i++)
	{
		if (primeNumber(i) == 0)
		{
			printf("%3d ", i);
			count++;
			ncount = 1;
		}
		if ((count % 5) == 0 && (ncount == 1))
		{
			printf("\n");
			ncount = 0;
		}
	}
	printf("\n1~%d까지의 소수의 개수 : %d개\n", n, count);
}
int input()
{
	int n;
	printf("정수값 하나를 입력하세요 : ");
	scanf("%d", &n);

	return n;
}
int primeNumber(int n)
{
	int yOn=0;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if ((n%i) == 0)
		{
			yOn = 1; // 소수아님
			break;
		}
		else
			yOn = 0; // 소수임
	}
	return yOn;
}