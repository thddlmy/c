#include <stdio.h>
#pragma warning(disable : 4996)

int input(const char *);


int main()
{
	int arr[50];
	int n, res;
	unsigned int num = 0x80000000;

	n = input("10진수 정수를 입력하세요 : ");

	for (int i = 0; i < 32; i++)
	{
		res = n & num;
		if (res == 0) printf("0");
		else printf("1");
		num = num >> 1;
	}

}
int input(const char * ch)
{
	int n;
	printf("%s", ch);
	scanf("%d", &n);

	return n;
}
