#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)

int main()
{
	char firstName[20], lastName[20];
	printf("**********������ C��� HW13**********\n");
	printf("���� �Է��ϼ��� : ");
	scanf("%s", firstName);
	printf("�̸��� �Է��ϼ��� : ");
	scanf("%s", lastName);

	printf("%-10s %-10s\n", firstName, lastName);
	printf("%*d %*d", strlen(firstName), strlen(firstName), 10 - strlen(firstName) + strlen(lastName), strlen(lastName));
}

