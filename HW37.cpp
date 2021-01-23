#include <stdio.h>

int main()
{
	printf("**********Á¤Çý°æ C¾ð¾î HW37**********\n");
	for (int i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 != 0))
		{
			printf("* ");
		}
		else if ((i % 5 == 0) && (i % 3 != 0))
		{
			printf("# ");
		}
		else
		{
			printf("%d ", i);
		}
		if ((i % 10 == 0))
		{
			printf("\n");
		}
	}
}