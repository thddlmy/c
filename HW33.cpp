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

	printf("**********������ C��� HW33**********\n");
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
		printf("<MENU> 1. ȯǳ������ / 2. ȯǳ���ݱ� / 3. ȯǳ�� ��ü ��ȯ / 4. ���� : ");
		scanf("%d", &menuNum);
		if (menuNum > 4)
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
unsigned char openFan(unsigned char onOff)
{
	unsigned char n = 0x01;
	int choiceNum;
	printf("----------------------------------------------\n");
	printf("              FAN�����۾�����ȭ��             \n");
	printf("----------------------------------------------\n");
	choiceNum = inputString("OPEN�� FAN��ȣ�� �Է��Ͻÿ� (1-8) : ");
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
		printf("%5d��FAN ", i);
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
	printf("              FAN�ݱ��۾�����ȭ��             \n");
	printf("----------------------------------------------\n");
	choiceNum = inputString("CLOSE�� FAN��ȣ�� �Է��Ͻÿ� (1-8) : ");
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
	printf("              FAN��ȯ�۾�����ȭ��             \n");
	printf("----------------------------------------------\n");
	printf("��ü FAN�� ���°� ��ȯ�Ǿ����ϴ�. (ON,OFF���µڹٲ�) \n");
	printf("----------------------------------------------\n");
	
	onOff = ~onOff;

	return onOff;
}