#include <stdio.h>
#pragma warning (disable : 4996)

void input(int *, int *);//�����Է¹޴��Լ�
void input_eOro(char *, int *, int*);
void output(char *, int *, int*);
void myflush();

int main()
{
	int min, max;
	char ch;

	printf("**********������ C��� HW44**********\n");
	input(&min, &max);
	input_eOro(&ch, &min, &max);
	output(&ch, &min, &max);
	
}
void input(int * min, int * max)
{
	printf("���۰��� �Է��ϼ��� : ");
	scanf("%d", min);
	
	while (1)
	{
		printf("�� ���� �Է��Ͻÿ� : ");
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
		printf("%d~%d������ ¦���� ���� ���ұ��? Ȧ���� ���� ���ұ��? (¦��:e/Ȧ��:o) : ", *min, *max);
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
		printf("%d~%d������ ¦�� : ", *min, *max);
		for (int i = *min; i <= *max; i++)
		{
			if ((i % 2) == 0)
			{
				sum += i;
				printf("%d ", i);
			}
		}
		printf(" ������ %d�Դϴ� !", sum);
	}
	else
	{
		printf("%d~%d������ Ȧ�� : ", *min, *max);
		for (int i = *min; i <= *max; i++)
		{
			if ((i % 2) != 0)
			{
				sum += i;
				printf("%d ", i);
			}
		}
		printf(" ������ %d�Դϴ� !", sum);
	}
}