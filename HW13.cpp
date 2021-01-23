#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)

int main()
{
	char firstName[20], lastName[20];
	printf("**********정혜경 C언어 HW13**********\n");
	printf("성을 입력하세요 : ");
	scanf("%s", firstName);
	printf("이름을 입력하세요 : ");
	scanf("%s", lastName);

	printf("%-10s %-10s\n", firstName, lastName);
	printf("%*d %*d", strlen(firstName), strlen(firstName), 10 - strlen(firstName) + strlen(lastName), strlen(lastName));
}

