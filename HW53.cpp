#include <stdio.h>
#include <ctype.h>
#include <string.h>
#pragma warning (disable:4996)

void input(char *);
int checkPalindrome(char *, int);
void output(char *, int);

int main()
{
	char str[100];
	int res;
	while (1)
	{
		input(str);
		if (strcmp(str, "end") == 0)
		{
			printf("프로그램을 종료합니다 !\n");
			break;
		}
		else
		{
			int size = strlen(str);
			res = checkPalindrome(str, size);
			output(str, res);
		}
	}
}
void input(char * str)
{
	printf("**********정혜경 C언어 HW53**********\n>단어 입력 : ");
	scanf("%s", str);
}
int checkPalindrome(char * str, int size)
{
	int check;
	for (int i = 0; i < size; i++) // 소문자로 다 바꾸기
	{
		str[i] = tolower(str[i]);
	}
	for (int i = 0; i < size / 2; i++)
	{
		if (str[i] == str[size -i-1])
		{
			check = 1;
		}
		else
		{
			check = 0;
		}
	}
	return check;
}
void output(char * str, int res)
{
	if (res == 1)
	{
		printf("'%s' : 회문입니다 !\n", str);
	}
	else
		printf("'%s' : 회문이 아닙니다 !\n", str);
}