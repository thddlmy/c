#include <stdio.h>
#pragma warning(disable : 4996)

int main()
{
	int n1;
	int n2;
	int temp;
	int res;

	printf("**********������ C��� HW23**********\n");
	
	while (1)
	{
		printf("�� ���� �Է��ϼ��� (���ڸ� �Է��ϸ� �����մϴ�) : ");
		res = scanf("%d %d", &n1, &n2);
		if (res != 2)
		{
			printf("���α׷��� �����մϴ� !\n");
			break;
		}
		else if (n1 < n2)
		{
			temp = n2;
			n2 = n1;
			n1 = temp;
		}
		else;

		printf("%d - %d = %d \n", n1, n2, n1 - n2);
	}
}