#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int n, numOfCr, numOfS, numOfCo,res;
	printf("**********������ C��� HW38**********\n");
	printf("���� ����� ���� �ݾ� �Է� : ");
	res = scanf("%d", &n);
	
	while (1) {
		
		printf("���� ����� ���� �ݾ� �Է� : ");
		res = scanf("%d", &n);
		if (res == 0)
		{
			break;
		}
		
		for (int i = 1; i <= n / 500; i++) // ũ���� ���� ���� ����
		{
			for (int j = 1; j <= (n - i * 500) / 700; j++) // ����� ���� ���� ����
			{
				for (int k = 1; k <= (n - i * 500 - j * 700) / 400; k++) // �ݶ� ���� ���� ����
				{
					if (n == (i * 500 + j * 700 + k * 400))
					{
						printf("ũ����(%d��), �����(%d����), �ݶ�(%d��)\n", i, j, k);
					}
				}
			}
		}
		printf("��� �����Ͻðڽ��ϱ� ? *^^*");
	}
}