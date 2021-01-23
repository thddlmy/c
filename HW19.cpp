#include <stdio.h>
#pragma warning (disable :4996)

int input();
int yearCheck(int);

int main()
{
	int year,yearWhat;
	year = input();
	yearWhat = yearCheck(year);

	printf("**********정혜경 C언어 HW19**********\n");

	if (year == 1) {
		printf("%d년은 윤년입니다 !", year);
	}
	else
	{
		printf("%d년은 평년입니다 !", year);
	}

}
int input()
{
	int year;
	printf("년도를 입력하세요 : ");
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
		return 0; // 평년	
}