#include <stdio.h>
#include <string.h>
#include <conio.h>
#pragma warning(disable : 4996)

int main()
{
	char name[20];
	double height;
	char sex;
	char sexWhat[10];

	printf("**********정혜경 C언어 HW17**********\n");
	printf("성명을 입력하세요 : ");
	scanf("%s", name);
	printf("키를 입력하세요 : ");
	scanf("%lf", &height);
	printf("성별을 입력하세요 (M/F) : ");
	scanf(" %c", &sex);

	if (sex == 'M')
	{
		sprintf(sexWhat, "남성");
	}
	else
		sprintf(sexWhat, "여성");
		
	printf("%s씨의 키는 %.2lfcm이고 %s입니다 !", name, height, sexWhat);
}
