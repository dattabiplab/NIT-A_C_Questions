// C Program to Display Fibonacci Sequence

#include <stdio.h>

int main()
{
	int a = -1, b = 1, n, sum = 0, i;
	printf("Enter The Number Upto Which You Want to Display Fibonacci Sequence: ");
	scanf("%d", &n);
	printf("%d\t", sum);

	for (i = 1; i < n; i++)
	{
		a = b;
		b = sum;
		sum = a + b;

		printf("%d\t", sum);
	}
	return 0;
}