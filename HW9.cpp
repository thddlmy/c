#include <stdio.h>
#pragma warning(disable :4996)

int input();

int main()
{
	int number;
	printf("**********������ C��� HW9**********\n");
	number = input();
	printf("�Էµ� ���� 8������ %#o �Դϴ� !\n ", number);
	printf("�Էµ� ���� 16������ %#x �Դϴ� !", number);

	return 0;
}

int input()
{
	int number;
	printf("�������� �Է��ϼ��� : ");
	scanf("%d", &number);

	return number;
}