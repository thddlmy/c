#include <stdio.h>
#include <string.h>
#include <math.h>
#pragma warning(disable : 4996)

int input(char *);
int makingNumber(int *, int, int *);

int main()
{
	int sum;
	char str[100];

	printf("**********������ C��� HW54**********\n");
	while (1)
	{
		sum = input(str);
		if (sum != -500)
		{
			printf("%s���� �� ���ڴ� %d�Դϴ� !\n", str, sum);
		}
		else
		{
			printf("���α׷��� �����մϴ� !\n");
			break;
		}
	}
}
int input(char * str)
{
	int number[100];
	int allSum[10];
	int sum = 0;
	int size = sizeof(number) / sizeof(number[0]);
	int count1=0, count2=0;

	printf(" > ���ڿ��� �Է��ϼ��� : ");
	scanf("%s", str);
	if (strcmp(str, "end") != 0)
	{
		for (int i = 0; i < strlen(str) + 1; i++)
		{
			if (str[i] > 47 && str[i] < 58) //����
			{
				number[count1] = str[i];
				count1++;
			}
			else
			{
				sum += makingNumber(number, count1, allSum);
				for (int i = 0; i < count1; i++)
				{
					number[i] = 0;
				}
				count1 = 0;
			}
		}
		return sum;
	}
	else
	{
		return -500;
	}
}
int makingNumber(int * number, int count, int * allSum)
{
	int sum = 0;
	int count2 = 0;
	
	for (int i = 0; i < count ; i++)
	{
		sum += (number[i]-'0') * pow(10, count - i -1);
		
	}
	return sum;
}
