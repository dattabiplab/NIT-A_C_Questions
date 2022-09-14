// C Program to Generate Multiplication Table

#include <stdio.h>

int main()
{
	int i = 1, n, pdt = 1;
	printf("Enter a Number: ");
	scanf("%d", &n);
	printf("**********MUltiplication Table of %d**********\n\n\n", n);

	while (i <= 10)
	{
		printf("%d X %d = %d\n", n, i, (n * i));
		i++;
	}
	return 0;
}