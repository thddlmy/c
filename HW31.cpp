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

	printf("**********������ C��� HW31*********\n");
	printf("���� �ܾ��� %d�Դϴ� !\n", money);

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
			printf("���α׷��� �����մϴ� ! \n");
			q = 0;
			break;
		}

	}
	
}
char menu(int money)
{
	char menuNum;
	printf("�޴��� �����ϼ��� ( i > �Ա� o > ��� q > ���� ) : ");
	while (1)
	{
		scanf(" %c", &menuNum);

		if ((menuNum == 'i') || (menuNum == 'o') || (menuNum == 'q'))
		{
			break;
		}
		else
		{
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��Ͻʽÿ� : ");
		}
	}
	return menuNum;
}
int deposit(int money)
{
	int inputMoney;
	inputMoney = inputInt("�Աݾ��� �Է��ϼ��� : ");
	money += inputMoney;
	
	printf("���� �ܾ��� %d���Դϴ� !\n", money);
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
			printf("�߸� �Է��ϼ̽��ϴ� ! �ٽ� �Է����ּ��� !\n");
		}
		else if (getchar() != '\n')
		{
			printf("�߸� �Է��ϼ̽��ϴ� ! �ٽ� �Է����ּ��� !\n");
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
	outMoney = inputInt("��ݾ��� �Է��ϼ��� :");
	if (outMoney > money)
	{
		printf("�ܾ��� �����մϴ� !\n");
		printf("���� �ܾ��� %d�� �Դϴ� !\n", money);
	}
	else
	{
		money = money - outMoney;
		printf("���� �ܾ��� %d�� �Դϴ� !\n", money);
	}
	return money;
}
