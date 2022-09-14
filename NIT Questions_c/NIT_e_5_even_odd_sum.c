// C Program to print sum of all even & odd numbers up to n

#include <stdio.h>

int main()
{
	int i = 1, n, sum1 = 0, sum2 = 0;
	printf("Enter a Number: ");
	scanf("%d", &n);

	while (i <= n)
	{
		if (i % 2 == 0)
		{
			sum1 += i;
		}
		else
		{
			sum2 += i;
		}
		i++;
	}

	printf("Sum of First %d even natural numbers is %d\n", n, sum1);
	printf("Sum of First %d odd natural numbers is %d", n, sum2);
	return 0;
}