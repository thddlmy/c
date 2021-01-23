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
	printf("�����Ը� �Է��ϼ���(kg) : ");
	scanf("%d", &weight);
	return weight;
}
double inputHeight()
{
	double height;
	printf("Ű�� �Է��ϼ���(m) : ");
	scanf("%lf", &height);
	return height;
}
double calcBMI(int weight, double height)
{
	return weight / (height*height);
}
void output(double bmi)
{
	if (bmi < 18.5)printf("����� BMI�� %2.1lf���� ��ü���Դϴ�", bmi);
	else if (bmi < 25)printf("����� BMI�� %2.1lf���� ����ü���Դϴ�", bmi);
	else if (bmi < 30)printf("����� BMI�� %2.1lf���� ��ü���Դϴ�", bmi);
	else if (bmi < 40)printf("����� BMI�� %2.1lf���� ���Դϴ�", bmi);
	else printf("����� BMI�� %2.1lf���� �����Դϴ�", bmi);
}