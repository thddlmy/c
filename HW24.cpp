#include <stdio.h>
#pragma warning (disable : 4996)

int input();
int dayCalculator(int);
void output(int, int);

int main()
{
	int depth, dayCount;
	printf("**********������ C��� HW24*********\n");
	depth = input();
	dayCount = dayCalculator(depth);
	output(depth, dayCount);
}

int input()
{
	int depth;
	printf("�칰�� ���̸� �Է��ϼ��� (cm����) : ");
	scanf("%d", &depth);

	return depth;
}

int dayCalculator(int depth)
{
	int dayCount = 1;
	if (depth == 0)
	{
		dayCount = 0;
	}
	else
	{
		while (1)
		{
			if (depth <= 50)
			{
				break;
			}
			else
			{
				depth = depth - 30;
				dayCount++;
			}
		}
	}
	
	return dayCount;
}
void output(int depth, int dayCount)
{
	double meterDepth = (double)depth / 100;
	printf("%.2lf���� ������ �칰�� Ż���ϱ� ���ؼ��� %d���� �ɸ��ϴ� !", meterDepth, dayCount);
}