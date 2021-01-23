#include <stdio.h>
#pragma warning(disable : 4996)

double inputD();
double inputV();
void output(double,int, int, double);


int main()
{
	double distance, velocity, hours, sec,tol;
	int hour, min, counter = 0;

	printf("**********정혜경 C언어 HW7**********\n");

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
	printf("거리를 입력하세요 (km단위) : ");
	scanf("%lf", &distance);

	return distance;
}

double inputV()
{
	double velocity;
	printf("시속을 입력하세요 (km/h 단위) : ");
	scanf("%lf", &velocity);

	return velocity;
}

void output(double tol, int hour, int min, double sec)
{
	printf("%.3lfkm => %d시간 %d분 %.3lf초 소요됨 !\n", tol, hour, min, sec);
}