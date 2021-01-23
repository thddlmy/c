#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int n;
	printf("**********정혜경 C언어 HW11**********");
	printf("ASCII code 값을 입력하세요 : ");
	scanf("%d", &n);

	printf("%d은 '%c'의 ASCII code 입니다 !", n, n);
}