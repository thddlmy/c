#include <stdio.h>
#pragma warning(disable : 4996)

int inputUnit(const char *); // N �Է¹޴� �Լ� & ù�� ������
int transNumber(int); // �� �ڸ� ���� �� ���� ���
void output(int);


int main()
{
	int p1, p2, N, countOfNum=0, count=0,num;
	int *_p1 = &p1, *_p2 = &p2 , *_N = &N;

	printf("**********������ C��� HW29*********\n");

	p1 = inputUnit("p1�� �Է��ϼ��� (p1>=100) : "); 
	p2 =inputUnit("p2�� �Է��ϼ��� (p2<=10000) : ");
	N = inputUnit("N�� �Է��ϼ��� (1<=N<=10) : ");

	printf("<�������� %d�� ���� ���>\n", N);
	for (int i = p1; i <= p2; i++)
	{
		num = i;
		while (1)
		{
			num = transNumber(num);
			count++;
			if ((num / 1000 == 0) && (num / 100 == 0) && (num / 10 == 0)) // ���ڸ����� ���� ���ڸ�
			{
				if (count == N)
				{
					printf("%d\n", i);
					countOfNum++;
					break;
				}
				else
				{
					break;
				}
			}
		}
		count = 0;
	}
	output(countOfNum);
}
int inputUnit(const char * ch)
{
	int n;
	printf("%s\n", ch);
	scanf("%d", &n);

	return n;
}
int transNumber(int n)
{
	int divisior, n1, n2, n3, n4;
	if (n / 1000 == 0 && (n / 100 != 0)) // ���ڸ����
	{
		n1 = n / 100;
		n2 = (n % 100) / 10;
		n3 = ((n % 100) % 10);

		divisior = n1 * n2 * n3;
	}
	else if ((n / 1000 == 0) && (n / 100 == 0)) // ���ڸ�
	{
		n1 = n / 10;
		n2 = n % 10;

		divisior = n1 * n2;
	}
	else // ���ڸ� ���
	{
		n1 = n / 1000;
		n2 = (n % 1000) / 100;
		n3 = ((n % 1000) % 100) / 10;
		n4 = (((n % 1000) % 100) % 10);

		divisior = n1 * n2 * n3 * n4;
	}
	return divisior;
}
void output(int n)
{
	printf("<�Ѱ���> : %d��", n);
}
