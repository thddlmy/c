#include <stdio.h>
#pragma warning(disable : 4996)

int main()
{
	char ch;
	printf("**********정혜경 C언어 HW41**********\n");
	while (1)
	{
		printf("영문자 대문자를 입력하세요 : ");
		scanf(" %c", &ch);
		if (ch > 'Z' || ch < 'A')
		{
			printf("프로그램을 종료합니다.");
			break;
		}
		for (int i = 0; i <= ch- 65; i++)
		{
			for (int j = ch; j >= ch-i ; j--)
			{
				printf("%c", j);
			}
			printf("\n");
		}

	}
}