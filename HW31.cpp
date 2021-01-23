#include <stdio.h>
#pragma warning(disable : 4996)

char menu(int);
int inputInt(const char *);
int deposit(int);
int withdraw(int);
void myflush();

int main()
{
	char menuNum;
	int money=0;
	int q = 1;

	printf("**********정혜경 C언어 HW31*********\n");
	printf("현재 잔액은 %d입니다 !\n", money);

	while (q)
	{
		menuNum = menu(money);
		switch (menuNum)
		{
		case 'i' :
			money = deposit(money);
			break;
		case 'o' :
			money = withdraw(money);
			break;
		case 'q' :
			printf("프로그램을 종료합니다 ! \n");
			q = 0;
			break;
		}

	}
	
}
char menu(int money)
{
	char menuNum;
	printf("메뉴를 선택하세요 ( i > 입금 o > 출금 q > 종료 ) : ");
	while (1)
	{
		scanf(" %c", &menuNum);

		if ((menuNum == 'i') || (menuNum == 'o') || (menuNum == 'q'))
		{
			break;
		}
		else
		{
			printf("잘못 입력하셨습니다. 다시 입력하십시오 : ");
		}
	}
	return menuNum;
}
int deposit(int money)
{
	int inputMoney;
	inputMoney = inputInt("입금액을 입력하세요 : ");
	money += inputMoney;
	
	printf("현재 잔액은 %d원입니다 !\n", money);
	return money;
}
int inputInt(const char * ch)
{
	int n;
	while (1)
	{
		printf("%s", ch);
		scanf("%d", &n);
		if (n < 0)
		{
			printf("잘못 입력하셨습니다 ! 다시 입력해주세요 !\n");
		}
		else if (getchar() != '\n')
		{
			printf("잘못 입력하셨습니다 ! 다시 입력해주세요 !\n");
			break;
		}
		else
			break;
		myflush();
	}
	return n;
}
void myflush()
{
	while (getchar() != '\n')
	{
		;
	}
	return;
}
int withdraw(int money)
{
	int outMoney;
	outMoney = inputInt("출금액을 입력하세요 :");
	if (outMoney > money)
	{
		printf("잔액이 부족합니다 !\n");
		printf("현재 잔액은 %d원 입니다 !\n", money);
	}
	else
	{
		money = money - outMoney;
		printf("현재 잔액은 %d원 입니다 !\n", money);
	}
	return money;
}
