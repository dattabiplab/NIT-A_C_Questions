// C Program to Calculate the Sum of Natural Numbers

#include <stdio.h>

int main()
{
	int n, i, sum = 0;
	printf("Enter a Number: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		sum += i;
		// printf("%d\n", i);
	}
	printf("Your Sum is %d\n", sum);
	return 0;
}