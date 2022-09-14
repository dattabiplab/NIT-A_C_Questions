// C Program to print a given number is Prime Number or not.

#include <stdio.h>

int main()
{
	int n, i, isprime = 1;
	printf("Enter The Number: ");
	scanf("%d", &n);
	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			isprime = 0;
		}
	}

	if (isprime)
	{
		printf("The Given Number %d is Prime.", n);
	}

	else
	{
		printf("The Given Number %d is Not Prime.", n);
	}
	return 0;
}