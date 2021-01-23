#include <stdio.h>
#pragma warning(disable : 4996)

int input();
int calculator(int n);
void output(int n);


int main()
{
	int n, sum;
	printf("**********정혜경 C언어 HW16*********\n");

	n = input();

	sum = calculator(n);
	output(sum);

}
int input()
{
	int n;
	printf("역수를 입력하세요 ! : ");
	scanf("%d", &n);

	return n;
}

int calculator(int n)
{
	int extra = n - 10;
	if (n < 11)
	{
		if (n < 6)
			n = 600;
		else
			n = 800;
	}
	else
	{
		if (n % 2 == 1)
			extra = (n - 10 + 1) / 2;
		else
			extra = (n - 10) / 2;
		n = 800 + extra * 100;
	}
	return n;
}
void output(int sum)
{
	printf("요금 : %d원", sum);
}