#include <stdio.h>
#pragma warning(disable : 4996)

int inputUnit(const char *); // N 입력받는 함수 & 첫값 끝값도
int transNumber(int); // 각 자리 분할 후 곱한 결과
void output(int);


int main()
{
	int p1, p2, N, countOfNum=0, count=0,num;
	int *_p1 = &p1, *_p2 = &p2 , *_N = &N;

	printf("**********정혜경 C언어 HW29*********\n");

	p1 = inputUnit("p1을 입력하세요 (p1>=100) : "); 
	p2 =inputUnit("p2을 입력하세요 (p2<=10000) : ");
	N = inputUnit("N을 입력하세요 (1<=N<=10) : ");

	printf("<고집수가 %d인 숫자 출력>\n", N);
	for (int i = p1; i <= p2; i++)
	{
		num = i;
		while (1)
		{
			num = transNumber(num);
			count++;
			if ((num / 1000 == 0) && (num / 100 == 0) && (num / 10 == 0)) // 각자리수의 곱이 한자리
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
	if (n / 1000 == 0 && (n / 100 != 0)) // 세자리경우
	{
		n1 = n / 100;
		n2 = (n % 100) / 10;
		n3 = ((n % 100) % 10);

		divisior = n1 * n2 * n3;
	}
	else if ((n / 1000 == 0) && (n / 100 == 0)) // 두자리
	{
		n1 = n / 10;
		n2 = n % 10;

		divisior = n1 * n2;
	}
	else // 네자리 경우
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
	printf("<총개수> : %d개", n);
}
