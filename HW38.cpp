#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int n, numOfCr, numOfS, numOfCo,res;
	printf("**********정혜경 C언어 HW38**********\n");
	printf("현재 당신의 소유 금액 입력 : ");
	res = scanf("%d", &n);
	
	while (1) {
		
		printf("현재 당신의 소유 금액 입력 : ");
		res = scanf("%d", &n);
		if (res == 0)
		{
			break;
		}
		
		for (int i = 1; i <= n / 500; i++) // 크림빵 개수 제한 영역
		{
			for (int j = 1; j <= (n - i * 500) / 700; j++) // 새우깡 개수 제한 영역
			{
				for (int k = 1; k <= (n - i * 500 - j * 700) / 400; k++) // 콜라 개수 제한 영역
				{
					if (n == (i * 500 + j * 700 + k * 400))
					{
						printf("크림빵(%d개), 새우깡(%d봉지), 콜라(%d개)\n", i, j, k);
					}
				}
			}
		}
		printf("어떻게 구입하시겠습니까 ? *^^*");
	}
}