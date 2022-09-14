// C Program to find sum of prime numbers

#include <stdio.h>

int main()
{
	int n, i, j, isprime, sum = 0;
	printf("Enter The Number: ");
	scanf("%d", &n);
	for (i = 2; i <= n; i++)
	{
		isprime = 1;

		for (j = 2; (j <= (i / 2)); j++)
		{
			if (i % j == 0)
			{
				isprime = 0;
				// printf("%d\t", i);
				// printf("\n\n");
				break;
			}
		}
		if (isprime == 1)
		{
			printf("%d\t", i);
			sum += i;
		}
	}
	printf("\nSum of Prime Numbers Upto %d is %d", n, sum);

	return 0;
}