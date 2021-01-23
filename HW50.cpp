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
			printf("프로그램을 종료합니다 !\n");
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
	printf("**********정혜경 C언어 HW49**********\n>문자열을 입력하세요 : ");
	scanf(" %s", str);
	myflush();
}
void inputChar(char * ch)
{
	printf(">문자를 입력하세요 : ");
	scanf(" %c", ch);
}
void strcheck(char * str, char ch, int size, int * count)
{
	if (strcmp(str, "end") == 0)
	{
		printf("프로그램을 종료합니다 !\n");
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
	printf("'%s'문자열 안에 '%c'는 ", str, ch);
	for (int i = 0; i < size; i++)
	{
		if (count[i] == 1)
		{
			countN++;
			printf("%d번 ", i);
		}
	}
	if (countN == 0)
	{
		printf("존재하지 않습니다 ! \n");
	}
	else
	{
		printf("위치에 존재합니다 !\n");
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
