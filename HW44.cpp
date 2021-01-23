#include <stdio.h>
#pragma warning (disable : 4996)

void input(int *, int *);//끝값입력받는함수
void input_eOro(char *, int *, int*);
void output(char *, int *, int*);
void myflush();

int main()
{
	int min, max;
	char ch;

	printf("**********정혜경 C언어 HW44**********\n");
	input(&min, &max);
	input_eOro(&ch, &min, &max);
	output(&ch, &min, &max);
	
}
void input(int * min, int * max)
{
	printf("시작값을 입력하세요 : ");
	scanf("%d", min);
	
	while (1)
	{
		printf("끝 값을 입력하시요 : ");
		scanf("%d", max);

		if (*max < *min)
		{
			;
		}
		else if ((getchar() != '\n'))
		{
			;
		}
		else
		{
			break;
		}
		myflush();
	}
}
void myflush()
{
	while (getchar() != '\n')
	{
		;
	}
	return;
}
void input_eOro(char * ch, int * min, int * max)
{
	while (1)
	{
		printf("%d~%d까지의 짝수의 합을 구할까요? 홀수의 합을 구할까요? (짝수:e/홀수:o) : ", *min, *max);
		scanf(" %c", ch);

		if ((*ch == 'e') || (*ch == 'o'))
		{
			break;
		}
		else
		{
			;
		}
		myflush();
	}
}
void output(char * ch, int * min, int * max)
{
	int sum = 0;
	if (*ch == 'e')
	{
		printf("%d~%d까지의 짝수 : ", *min, *max);
		for (int i = *min; i <= *max; i++)
		{
			if ((i % 2) == 0)
			{
				sum += i;
				printf("%d ", i);
			}
		}
		printf(" 총합은 %d입니다 !", sum);
	}
	else
	{
		printf("%d~%d까지의 홀수 : ", *min, *max);
		for (int i = *min; i <= *max; i++)
		{
			if ((i % 2) != 0)
			{
				sum += i;
				printf("%d ", i);
			}
		}
		printf(" 총합은 %d입니다 !", sum);
	}
}