#include <stdio.h>
#pragma warning(disable:4996)

int menu(); //myflush X
unsigned char openFan(unsigned char);
unsigned char offFan(unsigned char);
unsigned char reverseFan(unsigned char);
void display(unsigned char);
void myflush(); 
int inputString(const char *); // myflush X

int main()
{
	int menuNum;
	int exit = 1;
	unsigned char onOff = 0x00, choiceNum;

	printf("**********정혜경 C언어 HW33**********\n");
	while (exit)
	{
		menuNum = menu();
		switch (menuNum)
		{
		case 1 :
		{
			onOff = openFan(onOff);
			display(onOff);
			break;
		}
		case 2 :
		{
			onOff = offFan(onOff);
			display(onOff);
			break;
		}
		case 3 :
		{
			onOff = reverseFan(onOff);
			display(onOff);
			break;
		}
		case 4 : 
		{
			exit = 0;
			break;
		}
		}
	}
}
int menu()
{
	int menuNum;
	while (1)
	{
		printf("<MENU> 1. 환풍구열기 / 2. 환풍구닫기 / 3. 환풍구 전체 전환 / 4. 종료 : ");
		scanf("%d", &menuNum);
		if (menuNum > 4)
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
	return menuNum;
}
void myflush()
{
	while (getchar() != '\n')
	{
		;
	}
	return;
}
int inputString(const char * ch)
{
	int n;

	while (1)
	{
		printf("%s", ch);
		scanf("%d", &n);

		if (n > 8 || n <= 0)
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
unsigned char openFan(unsigned char onOff)
{
	unsigned char n = 0x01;
	int choiceNum;
	printf("----------------------------------------------\n");
	printf("              FAN열기작업실행화면             \n");
	printf("----------------------------------------------\n");
	choiceNum = inputString("OPEN할 FAN번호를 입력하시오 (1-8) : ");
	printf("----------------------------------------------\n");
	for (int i = 0; i < choiceNum-1; i++)
	{
		n = n << 1;
	}
	onOff = n|onOff;

	return onOff;
}
void display(unsigned char onOff)
{
	unsigned char n = 0x80;
	char off[] = "OFF";
	char on[] = "ON";
	
	for (int i = 8; i > 0; i--)
	{
		printf("%5d번FAN ", i);
	}
	printf("\n");
	for (int i = 0; i < 8; i++)
	{
		if ((n&onOff) == 0)
			{
				printf(" %7s   ", off);
			}
			else
			{
				printf(" %7s   ", on);
			}
			n = n >> 1;
	}
	printf("\n");
	
}
unsigned char offFan(unsigned char onOff)
{
	unsigned char n = 0x01, choiceNum;
	printf("----------------------------------------------\n");
	printf("              FAN닫기작업실행화면             \n");
	printf("----------------------------------------------\n");
	choiceNum = inputString("CLOSE할 FAN번호를 입력하시오 (1-8) : ");
	printf("----------------------------------------------\n");
	for (int i = 0; i < choiceNum-1; i++)
	{
		n = n << 1;
	}
	onOff = n ^ onOff;

	return onOff;
}
unsigned char reverseFan(unsigned char onOff)
{
	printf("----------------------------------------------\n");
	printf("              FAN전환작업실행화면             \n");
	printf("----------------------------------------------\n");
	printf("전체 FAN의 상태가 전환되었습니다. (ON,OFF상태뒤바뀜) \n");
	printf("----------------------------------------------\n");
	
	onOff = ~onOff;

	return onOff;
}