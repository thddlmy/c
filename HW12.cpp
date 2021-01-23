#include <stdio.h>
#pragma warning(disable : 4996)

int main()
{
	char name[20];
	printf("**********정혜경 C언어 HW12**********");
	printf("이름을 입력하세요 : ");
	scanf("%s", name);

	printf("\"%s\"\n", name);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);
}