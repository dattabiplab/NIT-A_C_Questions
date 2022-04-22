// C Program to Display Fibonacci Sequence

#include <stdio.h>

int main()
{
	int i = 1, n, a = -1, b = 1, sum = 0;
	printf("Enter a Number: ");
	scanf("%d", &n);
	printf("%d\t", sum);
	while (i < n)
	{
		a = b;
		b = sum;
		sum = a + b;
		printf("%d\t", sum);
		i++;
	}
	return 0;
}