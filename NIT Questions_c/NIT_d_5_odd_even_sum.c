// C Program to print sum of all even & odd numbers up to n

#include <stdio.h>

int main()
{
	int n, i, sum1 = 0, sum2 = 0;
	printf("Enter a Number: ");
	scanf("%d", &n);
	printf("************Sum of All The Odd Numbers Upto %d************\n", n);

	for (i = 1; i <= n; i++)
	{
		if (i % 2 != 0)
		{
			sum1 += i;
		}
	}
	// printf("Sum of all Odd Numbers Upto %d is %d\n\n\n", n, sum1);
	printf("\t\t\t\t%d\n\n\n", sum1);

	printf("************Sum of All The Even Numbers Upto %d************\n", n);

	for (i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			sum2 += i;
		}
	}
	// printf("Sum of all Even Numbers Upto %d is %d", n, sum2);
	printf("\t\t\t\t%d\n\n\n", sum2);

	return 0;
}