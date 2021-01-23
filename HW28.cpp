#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int alphabet=0;
	int number=0;
	int space=0;
	int andSoOn=0;
	char ch=0;

	printf("**********정혜경 C언어 HW28**********\n>>영문 문장을 입력하세요 : \n");

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
	printf("<결과>\n영문자 대소문자 개수 : %d\n숫자 문자 개수 : %d\n여백문자 개수 : %d\n그 외 기타문자 개수 : %d\n", alphabet, number, space, andSoOn);
}