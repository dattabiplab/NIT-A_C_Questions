// C Program to find sum of prime numbers

#include <stdio.h>

int main()
{
	int i = 2, j, n, count, sum = 0;
	printf("Enter a Number: ");
	scanf("%d", &n);

	while (i <= n)
	{
		j = 1;
		count = 0;
		while (j <= i)
		{
			if (i % j == 0)
			{
				count++;
			}
			j++;
		}
		if (count == 2)
		{
			printf("%d\t", i);
			sum += i;
		}
		i++;
	}
	printf("\nSum of Prime Numbers Upto %d is %d.", n, sum);
	return 0;
}