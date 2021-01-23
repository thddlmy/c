#include <stdio.h>
#pragma warning (disable:4996)

int input(int *, int *, int *); // ��,��,��
void checkDay(int *, int *, int *); // ��,��,�� ����������
int tolDay(int *, int *, int *);
void output(int, int *, int *, int *);
int isYear(int *); // ����, ���
void myflush();

int main()
{
	int year, month, day, isyear, tol, res;

	printf("**********������ C��� HW46**********\n");

	while (1)
	{
		if (res = input(&year, &month, &day) != 3)
		{
			break;
		}
		else
		{
			checkDay(&year, &month, &day);
			tol = tolDay(&year, &month, &day);
			output(tol, &year, &month, &day);
		}
	}
}

int input(int * year, int * month, int * day)
{
	int res,q;
	
	printf("��, ��, ���� �Է��ϼ��� : ");		
	res = scanf("%d %d %d", year, month, day);
	return res;
}
void checkDay(int * year, int * month, int * day)
{
	while (1)
	{
		
		if (*month > 12 || *month < 1)
		{
			printf("�ٽ��Է��ϼ��� : ");
			scanf("%d %d %d", year, month, day);
		}
		else if (*day > 29 && *month == 2)
		{
			printf("�ٽ��Է��ϼ��� : ");
			scanf("%d %d %d", year, month, day);
		}
		else if (*day > 31)
		{
			printf("�ٽ��Է��ϼ��� : ");
			scanf("%d %d %d", year, month, day);
		}
		else
		{
			break;
		}		
	}
}
int isYear(int * year)
{
	int isyear;
	if ((*year % 4) == 0)
	{
		if ((*year % 100) == 0)
		{
			if ((*year % 400) == 0)
			{
				isyear = 1;
			}
			else
			{
				isyear = 0;
			}
		}
		else
		{
			isyear = 1;
		}
	}
	else
	{
		isyear = 0;
	}
	return isyear;
}
void myflush()
{
	while (getchar() != '\n')
	{
		;
	}
	return;
}
int tolDay(int * year, int * month, int *day)
{
	int tol = 0;
	int monthDay[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	for (int i = 1990; i < *year; i++)
	{
		if (isYear(&i) == 0) //���
		{
			tol = tol + 365;
		}
		else
		{
			tol = tol + 366;
		}
	}
	for (int i = 1; i < *month; i++)
	{
		tol = tol + monthDay[i-1];
	}
	tol = tol + *day;
	if (isYear(year) == 1 && *month > 2)
	{
		tol = tol + 1;
	}
	else if (isYear(year) == 1 && *month <= 2 && *day == 29)
	{
		tol = tol + 1;
	}
	else
		;

	return tol;
}
void output(int tol, int * year, int * month, int *day)
{
	switch (tol%7)
	{
	case 0:
		{
		printf("%d�� %d�� %d���� �Ͽ����Դϴ� !\n", *year, *month, *day);
		break;
		}
	case 1:
		{
		printf("%d�� %d�� %d���� �������Դϴ� !\n", *year, *month, *day);
		break;
		}
	case 2:
		{
		printf("%d�� %d�� %d���� ȭ�����Դϴ� !\n", *year, *month, *day);
		break;
		}
	case 3:
		{
		printf("%d�� %d�� %d���� �������Դϴ� !\n", *year, *month, *day);
		break;
		}
	case 4:
		{
		printf("%d�� %d�� %d���� ������Դϴ� !\n", *year, *month, *day);
		break;
		}
	case 5:
		{
		printf("%d�� %d�� %d���� �ݿ����Դϴ� !\n", *year, *month, *day);
		break;
		}
	case 6:
		{
		printf("%d�� %d�� %d���� ������Դϴ� !\n", *year, *month, *day);
		break;
		}
	}
}