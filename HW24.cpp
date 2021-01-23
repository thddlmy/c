#include <stdio.h>
#pragma warning (disable : 4996)

int input();
int dayCalculator(int);
void output(int, int);

int main()
{
	int depth, dayCount;
	printf("**********정혜경 C언어 HW24*********\n");
	depth = input();
	dayCount = dayCalculator(depth);
	output(depth, dayCount);
}

int input()
{
	int depth;
	printf("우물의 깊이를 입력하세요 (cm단위) : ");
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
	printf("%.2lf미터 깊이의 우물을 탈출하기 위해서는 %d일이 걸립니다 !", meterDepth, dayCount);
}