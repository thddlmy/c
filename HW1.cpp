#include <stdio.h>

void printAge(int);
void printHeight(double);

int main()
{
	printf("**********정혜경의 C언어 HW1**********\n");

	char name[20] = "박송이";
	int age = 22;
	double height = 165.0;

	printf("성명 : %s\n", name);
	printAge(age);
	printHeight(height);

	return 0;
}

void printAge(int age)
{
	printf("나이 : %d\n", age);
	return;
}

void printHeight(double height)
{
	printf("키 : %lf", height);
	return;
}