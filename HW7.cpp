#include <stdio.h>
#pragma warning(disable : 4996)

double inputD();
double inputV();
void output(double,int, int, double);


int main()
{
	double distance, velocity, hours, sec,tol;
	int hour, min, counter = 0;

	printf("**********������ C��� HW7**********\n");

	while (counter<3) {
		distance = inputD();
		velocity = inputV();
		tol = distance;

		hours = (distance / velocity) * 3600;
		hour = hours / 3600;
		hours = hours - hour * 3600;
		min = hours / 60;
		hours = hours - min * 60;
		sec = hours;

		counter++;
		output(tol, hour, min, sec);
	}
}

double inputD()
{
	double distance;
	printf("�Ÿ��� �Է��ϼ��� (km����) : ");
	scanf("%lf", &distance);

	return distance;
}

double inputV()
{
	double velocity;
	printf("�ü��� �Է��ϼ��� (km/h ����) : ");
	scanf("%lf", &velocity);

	return velocity;
}

void output(double tol, int hour, int min, double sec)
{
	printf("%.3lfkm => %d�ð� %d�� %.3lf�� �ҿ�� !\n", tol, hour, min, sec);
}