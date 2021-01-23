#include <stdio.h>
#pragma warning(disable :4996)

int inputAge();
int inputNumber();
void output();

int main()
{
	int age, number, fee, allSum;
	age = inputAge();
	number = inputNumber();

	printf("**********정혜경 C언어 HW18**********\n");
	if (age < 20)
	{
		if (age < 8)
			fee = 500;
		else if (age < 14)
			fee = 700;
		else
			fee = 1000;
	}
	else
	{
		if (age < 56)
			fee = 1500;
		else
			fee = 500;
	}

	if (number < 5)
		allSum = number * fee;
	else
		allSum = number * fee * 0.9;
		
	printf("입장료 : %d원\n할인금액 : %d원\n결제금액 : %d원", number*fee, number*fee-allSum, allSum);

}
int inputAge()
{
	int age;
	printf("입장객의 나이를 입력하세요 : ");
	scanf("%d", &age);

	return age;
}
int inputNumber()
{
	int number;
	printf("입장객의 수를 입력하세요 : ");
	scanf("%d", &number);

	return number;
}