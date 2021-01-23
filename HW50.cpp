#include <stdio.h>
#include <string.h>
#pragma warning (disable : 4996)

void inputString(char *);
void inputChar(char *);
void strcheck(char *, char, int, int *);
void output(char *, int *, char, int);
void myflush();

int main()
{
	char ch;
	char str[99];
	int count[100] = { 0 };
	int size = sizeof(str) / sizeof(str[0]);
	
	while (1)
	{
		inputString(str);
		if (strcmp(str, "end") == 0)
		{
			printf("���α׷��� �����մϴ� !\n");
			break;
		}
		else
		{
			inputChar(&ch);
			strcheck(str, ch, size, count);
			output(str, count, ch, size);
			for(int i = 0; i < strlen(str); i++)
			{
				str[i] = 0;
			}
		}
	}
	
}
void inputString(char * str)
{
	char ch;
	printf("**********������ C��� HW49**********\n>���ڿ��� �Է��ϼ��� : ");
	scanf(" %s", str);
	myflush();
}
void inputChar(char * ch)
{
	printf(">���ڸ� �Է��ϼ��� : ");
	scanf(" %c", ch);
}
void strcheck(char * str, char ch, int size, int * count)
{
	if (strcmp(str, "end") == 0)
	{
		printf("���α׷��� �����մϴ� !\n");
	}
	else
	{
		for (int i = 0; i < size; i++)
		{
			if (str[i] == ch)
			{
				count[i + 1] = 1;
			}
		}
	}
}
void output(char * str, int * count, char ch, int size)
{
	int countN = 0;
	printf("'%s'���ڿ� �ȿ� '%c'�� ", str, ch);
	for (int i = 0; i < size; i++)
	{
		if (count[i] == 1)
		{
			countN++;
			printf("%d�� ", i);
		}
	}
	if (countN == 0)
	{
		printf("�������� �ʽ��ϴ� ! \n");
	}
	else
	{
		printf("��ġ�� �����մϴ� !\n");
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
