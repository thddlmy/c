#include <stdio.h>
#pragma warning (disable :4996)

int input();
int yearCheck(int);

int main()
{
	int year,yearWhat;
	year = input();
	yearWhat = yearCheck(year);

	printf("**********������ C��� HW19**********\n");

	if (year == 1) {
		printf("%d���� �����Դϴ� !", year);
	}
	else
	{
		printf("%d���� ����Դϴ� !", year);
	}

}
int input()
{
	int year;
	printf("�⵵�� �Է��ϼ��� : ");
	scanf("%d", &year);
	
	return year;
}
int yearCheck(int year)
{
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
				return 1;
			else
				return 0;
		}
		else
			return 1;
	}
	else
		return 0; // ���	
}