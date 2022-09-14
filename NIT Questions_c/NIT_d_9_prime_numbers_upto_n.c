// C Program to print list of all Prime Number up to a certain Limit.

#include <stdio.h>

int main()
{
	int n, i, j, isprime;
	printf("Enter The Number: ");
	scanf("%d", &n);
	printf("All Prime Numbers Upto %d:\n", n);
	for (i = 2; i <= n; i++)
	{
		isprime = 1;
		for (j = 2; (j <= (i / 2)); j++)
		{
			if (i % j == 0)
			{
				isprime = 0;
				break;
			}
		}
		if (isprime == 1)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}