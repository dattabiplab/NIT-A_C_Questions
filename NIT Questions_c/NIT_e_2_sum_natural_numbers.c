// C Program to Calculate the Sum of Natural Numbers

#include <stdio.h>

int main()
{
	int i = 1, n, sum1 = 0, sum2;
	printf("Enter a Number: ");
	scanf("%d", &n);

	while (i <= n)
	{

		sum1 += i;
		i++;
	}
	sum2 = (n * n + n) / 2;
	printf("Sum of First %d natural numbers is %d\n", n, sum1);
	printf("Sum of First %d natural numbers is %d", n, sum2);
	return 0;
}