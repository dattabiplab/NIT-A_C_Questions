// C Program to Find Factorial of a Number

#include <stdio.h>

int main()
{
	int n, i, pdt = 1;
	printf("Enter The Number who's Factorial You Want: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		pdt *= i;
	}
	printf("Factorial of %d is %d", n, pdt);
	return 0;
}