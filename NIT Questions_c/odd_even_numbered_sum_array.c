// Print the sum of the odd numbered elements of the array and the even numbered elements of the array.

#include <stdio.h>

int main()
{
	int n, i, j, oddSum = 0, evenSum = 0;
	printf("\nEnter the size of an array: ");
	scanf("%d", &n);
	int a[n];
	for (i = 1; i <= n; i++)
	{
		printf("\nEnter array elements %d: ", i);
		scanf("%d", &a[i]);
	}
	for (i = 1; i <= n; i++)
	{
		if (i % 2 == 1)
		{
			oddSum += a[i];
		}
		else
		{
			evenSum += a[i];
		}
	}
	printf("Sum of Odd numbered elements: %d\n", oddSum);
	printf("Sum of Even numbered elements: %d\n", evenSum);

	return 0;
}