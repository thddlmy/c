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

	printf("**********������ C��� HW17**********\n");
	printf("������ �Է��ϼ��� : ");
	scanf("%s", name);
	printf("Ű�� �Է��ϼ��� : ");
	scanf("%lf", &height);
	printf("������ �Է��ϼ��� (M/F) : ");
	scanf(" %c", &sex);

	if (sex == 'M')
	{
		sprintf(sexWhat, "����");
	}
	else
		sprintf(sexWhat, "����");
		
	printf("%s���� Ű�� %.2lfcm�̰� %s�Դϴ� !", name, height, sexWhat);
}
