#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable : 4996)

int input();
void output();

int vicCount = 0;
int tieCount = 0;

int main()
{
	int n, ran;
	srand((unsigned int)time(NULL));
	printf("**********정혜경 C언어 HW26**********\n");
	output();
	printf("<게임결과> : %d승 %d무", vicCount, tieCount);
}
int input()
{
	int n;
	printf("바위(1) 가위(2) 보(3) 중 하나를 선택하세요 : ");
	scanf("%d", &n);

	return n;
}
void output()
{
	int ran;
	int n;
	while (1) {
		n = input();
		ran = rand() % 3 + 1;
		if (n < ran)
		{
			if ((n == 1) && (ran == 3))
			{
				printf("당신은 바위 선택, 컴퓨터는 보 선택 : 당신이 졌습니다 !\n");
				break;
			}
			else if ((n == 1) && (ran == 2))
			{
				printf("당신은 바위 선택, 컴퓨터는 가위 선택 : 당신이 이겼습니다!\n");
				vicCount++;
			}
			else
			{
				printf("당신은 가위 선택, 컴퓨터는 보 선택 : 당신이 이겼습니다!\n");
				vicCount++;
			}
		}
		else if (n == ran)
		{
			if ((n == 1) && (ran == 1))
			{
				printf("당신은 바위 선택, 컴퓨터는 바위 선택 : 비겼습니다 !\n");
				tieCount++;
			}
			else if ((n == 2) && (ran == 2))
			{
				printf("당신은 가위 선택, 컴퓨터는 가위 선택 : 비겼습니다 !\n");
				tieCount++;
			}
			else
			{
				printf("당신은 보 선택, 컴퓨터는 보 선택 : 비겼습니다 !\n");
				tieCount++;
			}
		}
		else
		{
			if ((n == 3) && (ran == 1))
			{
				printf("당신은 보 선택, 컴퓨터는 바위 선택 : 당신이 이겼습니다 !\n");
				vicCount++;
			}
			else if ((n == 3) && (ran == 2))
			{
				printf("당신은 보 선택, 컴퓨터는 가위 선택 : 당신이 졌습니다 !\n");
				break;
			}
			else if ((n == 2) && (ran == 1))
			{
				printf("당신은 가위 선택, 컴퓨터는 보 선택 : 당신이 졌습니다 !\n");
				break;
			}
		}
	}
}
