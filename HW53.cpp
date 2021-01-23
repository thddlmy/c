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
			printf("���α׷��� �����մϴ� !\n");
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
	printf("**********������ C��� HW53**********\n>�ܾ� �Է� : ");
	scanf("%s", str);
}
int checkPalindrome(char * str, int size)
{
	int check;
	for (int i = 0; i < size; i++) // �ҹ��ڷ� �� �ٲٱ�
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
		printf("'%s' : ȸ���Դϴ� !\n", str);
	}
	else
		printf("'%s' : ȸ���� �ƴմϴ� !\n", str);
}