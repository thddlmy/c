#include <stdio.h>
#pragma warning(disable : 4996)

int main()
{
	char ch;
	printf("**********������ C��� HW41**********\n");
	while (1)
	{
		printf("������ �빮�ڸ� �Է��ϼ��� : ");
		scanf(" %c", &ch);
		if (ch > 'Z' || ch < 'A')
		{
			printf("���α׷��� �����մϴ�.");
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