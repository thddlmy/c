#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)

int input();
int primeNumber(int);

int main()
{
	int n, count = 0, ncount = 0;;
	printf("**********������ C��� HW43**********\n");
	n = input();
	printf("%d~%d������ �Ҽ� ���� ������ �����ϴ�.\n", 1, n);
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
	printf("\n1~%d������ �Ҽ��� ���� : %d��\n", n, count);
}
int input()
{
	int n;
	printf("������ �ϳ��� �Է��ϼ��� : ");
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
			yOn = 1; // �Ҽ��ƴ�
			break;
		}
		else
			yOn = 0; // �Ҽ���
	}
	return yOn;
}