#include <stdio.h>
#pragma warning (disable:4996)

int iterativeF(int);
int input();


int main()
{
	int n;
	printf("**********������ C��� HW37_2**********\n");
	n = input();

	n = iterativeF(n);
	printf(" = %d", n);
}
int input() 
{
	int n;
	printf("�Ǻ���ġ ������ �׼��� �Է��ϼ��� : ");
	scanf("%d", &n);

	return n;
}
int iterativeF(int n) {
	int n1 = 0, n2 = 1, result, sum=0;

	printf("%d + ", n2); // 1��° ��
	for (int i = 0; i < n - 1; i++) {
		result = n1 + n2;
		sum = sum + result;
		if (i != n - 2)
		{
			printf("%d + ", result);
		}
		else
		{
			printf("%d", result);
		}

		n1 = n2;
		n2 = result;
	}
	return sum;
}
