#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable : 4996)

int input();
void output();

int vicCount = 0;
int tieCount = 0;

int main()
{
	int n, ran;
	srand((unsigned int)time(NULL));
	printf("**********������ C��� HW26**********\n");
	output();
	printf("<���Ӱ��> : %d�� %d��", vicCount, tieCount);
}
int input()
{
	int n;
	printf("����(1) ����(2) ��(3) �� �ϳ��� �����ϼ��� : ");
	scanf("%d", &n);

	return n;
}
void output()
{
	int ran;
	int n;
	while (1) {
		n = input();
		ran = rand() % 3 + 1;
		if (n < ran)
		{
			if ((n == 1) && (ran == 3))
			{
				printf("����� ���� ����, ��ǻ�ʹ� �� ���� : ����� �����ϴ� !\n");
				break;
			}
			else if ((n == 1) && (ran == 2))
			{
				printf("����� ���� ����, ��ǻ�ʹ� ���� ���� : ����� �̰���ϴ�!\n");
				vicCount++;
			}
			else
			{
				printf("����� ���� ����, ��ǻ�ʹ� �� ���� : ����� �̰���ϴ�!\n");
				vicCount++;
			}
		}
		else if (n == ran)
		{
			if ((n == 1) && (ran == 1))
			{
				printf("����� ���� ����, ��ǻ�ʹ� ���� ���� : �����ϴ� !\n");
				tieCount++;
			}
			else if ((n == 2) && (ran == 2))
			{
				printf("����� ���� ����, ��ǻ�ʹ� ���� ���� : �����ϴ� !\n");
				tieCount++;
			}
			else
			{
				printf("����� �� ����, ��ǻ�ʹ� �� ���� : �����ϴ� !\n");
				tieCount++;
			}
		}
		else
		{
			if ((n == 3) && (ran == 1))
			{
				printf("����� �� ����, ��ǻ�ʹ� ���� ���� : ����� �̰���ϴ� !\n");
				vicCount++;
			}
			else if ((n == 3) && (ran == 2))
			{
				printf("����� �� ����, ��ǻ�ʹ� ���� ���� : ����� �����ϴ� !\n");
				break;
			}
			else if ((n == 2) && (ran == 1))
			{
				printf("����� ���� ����, ��ǻ�ʹ� �� ���� : ����� �����ϴ� !\n");
				break;
			}
		}
	}
}
