#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable : 4996)

int input();
int output(int);

int main()
{
	int n;
	int random;
	int count = 0;
	printf("**********������ C��� HW25**********\n");
	srand((unsigned int)time(NULL));
	random = rand()%100+1;

	count = output(random);
	printf("�������� ��÷������ %d��°���� ���߼̽��ϴ� ! \n", count);
	return 0;
}

int input()
{
	int n;
	printf("���ڸ� �Է��ϼ���(1~100) : ");
	scanf("%d", &n);

	return n;
}

int output(int random)
{
	int n;
	int preN=0,postN=100;
	int count = 0;
	while (1)
	{
		n = input();
		if (n == random)
		{
			count++;
			break;
		}
		else
		{
			if (n < random)
			{
				printf("%d���ٴ� ũ�� %d���ٴ� �۽��ϴ� !\n", n, postN);
				count++;	
				preN = n;
			}
			else
			{
				printf("%d���ٴ� ũ�� %d���ٴ� �۽��ϴ� !\n", preN, n);
				count++;
				postN = n;
			}
		}
	}
	return count++;
}