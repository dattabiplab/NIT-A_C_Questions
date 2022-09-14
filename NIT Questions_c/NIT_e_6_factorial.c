// C Program to Find Factorial of a Number

#include <stdio.h>

int main()
{
	int i = 1, n, pdt = 1;
	printf("Enter a Number: ");
	scanf("%d", &n);

	while (i <= n)
	{
		pdt *= i;
		i++;
	}
	printf("Factorial of %d is %d", n, pdt);
	return 0;
}