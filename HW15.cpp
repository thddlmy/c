#include<stdio.h>
#pragma warning (disable : 4996)
int inputWeight();
double inputHeight();
double calcBMI(int weight, double height);
void output(double bmi);
int main()
{
	int weight;
	double height, bmi;
	weight = inputWeight();
	height = inputHeight();
	bmi = calcBMI(weight, height);
	output(bmi);
	return 0;
}
int inputWeight()
{
	int weight;
	printf("몸무게를 입력하세요(kg) : ");
	scanf("%d", &weight);
	return weight;
}
double inputHeight()
{
	double height;
	printf("키를 입력하세요(m) : ");
	scanf("%lf", &height);
	return height;
}
double calcBMI(int weight, double height)
{
	return weight / (height*height);
}
void output(double bmi)
{
	if (bmi < 18.5)printf("당신의 BMI는 %2.1lf으로 저체중입니다", bmi);
	else if (bmi < 25)printf("당신의 BMI는 %2.1lf으로 정상체중입니다", bmi);
	else if (bmi < 30)printf("당신의 BMI는 %2.1lf으로 과체중입니다", bmi);
	else if (bmi < 40)printf("당신의 BMI는 %2.1lf으로 비만입니다", bmi);
	else printf("당신의 BMI는 %2.1lf으로 고도비만입니다", bmi);
}