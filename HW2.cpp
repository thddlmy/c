#include <stdio.h>

int main()
{
	int money = 278970, n = 0;
	int unit[8] = { 50000,10000,5000,1000,500,100,50,10 };

	printf("**********정혜경 C언어 HW2**********\n");
	for (int i = 0; i < 8; i++)
	{
		n = money / unit[i];
		money = money - unit[i] * n;
		printf("%d원권 => %d개\n", unit[i], n);
	}
}