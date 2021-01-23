#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable : 4996)

int input();
int output(int);

int main()
{
	int n;
	int random;
	int count = 0;
	printf("**********정혜경 C언어 HW25**********\n");
	srand((unsigned int)time(NULL));
	random = rand()%100+1;

	count = output(random);
	printf("♡♡♡축 당첨♡♡♡ %d번째만에 맞추셨습니다 ! \n", count);
	return 0;
}

int input()
{
	int n;
	printf("숫자를 입력하세요(1~100) : ");
	scanf("%d", &n);

	return n;
}

int output(int random)
{
	int n;
	int preN=0,postN=100;
	int count = 0;
	while (1)
	{
		n = input();
		if (n == random)
		{
			count++;
			break;
		}
		else
		{
			if (n < random)
			{
				printf("%d보다는 크고 %d보다는 작습니다 !\n", n, postN);
				count++;	
				preN = n;
			}
			else
			{
				printf("%d보다는 크고 %d보다는 작습니다 !\n", preN, n);
				count++;
				postN = n;
			}
		}
	}
	return count++;
}