#include <stdio.h>
#pragma warning(disable : 4996)

int main()
{
	double height;
	double sum = 0;

	for (int i = 0; i < 5; i++)
	{
		printf("%d�� �л��� Ű��? : ", i+1);
		scanf("%lf", &height);
		sum = sum + height;
	}
	printf("�ټ� ���� ��� Ű�� %.1lf�Դϴ� !", sum/5);
}