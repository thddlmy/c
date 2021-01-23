#include <stdio.h>
#pragma warning(disable : 4996)

int main()
{
	int n1;
	int n2;
	int temp;
	int res;

	printf("**********정혜경 C언어 HW23**********\n");
	
	while (1)
	{
		printf("두 수를 입력하세요 (문자를 입력하면 종료합니다) : ");
		res = scanf("%d %d", &n1, &n2);
		if (res != 2)
		{
			printf("프로그램을 종료합니다 !\n");
			break;
		}
		else if (n1 < n2)
		{
			temp = n2;
			n2 = n1;
			n1 = temp;
		}
		else;

		printf("%d - %d = %d \n", n1, n2, n1 - n2);
	}
}