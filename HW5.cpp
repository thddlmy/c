#include <stdio.h>
#pragma warning(disable : 4996)

#define BASICRATE 660
#define EXTRARATE 88.5

int input();
void output(double);

int main()
{
	int usage;
	double tol;
	usage = input();

	tol = BASICRATE + (usage*EXTRARATE);
	tol = tol * 1.09;

	output(tol);
}

int input() {

	int usage;
	printf("���� ��뷮�� �Է��ϼ��� : ");
	scanf("%d", &usage);

	return usage;
}

void output(double tol)
{
	printf("���� ������� %lf�� �Դϴ� !", tol);
}