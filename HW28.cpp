#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int alphabet=0;
	int number=0;
	int space=0;
	int andSoOn=0;
	char ch=0;

	printf("**********������ C��� HW28**********\n>>���� ������ �Է��ϼ��� : \n");

	while ((ch = getchar()) != EOF)
	{
		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		{
			alphabet++;
		}
		else if (ch >= '0' && ch <= '9')
		{
			number++;
		}
		else if (ch == '\n' || ch == ' ' || ch == '\t')
		{
			space++;
		}
		else
		{
			andSoOn++;
		}
	}
	printf("<���>\n������ ��ҹ��� ���� : %d\n���� ���� ���� : %d\n���鹮�� ���� : %d\n�� �� ��Ÿ���� ���� : %d\n", alphabet, number, space, andSoOn);
}