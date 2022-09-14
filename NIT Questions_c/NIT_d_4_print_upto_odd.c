// C Program to print all the odd number up to n

#include <stdio.h>

int main()
{
	int n, i;
	printf("Enter a Number: ");
	scanf("%d", &n);
	printf("************All The Odd Numbers Upto %d************\n", n);

	for (i = 1; i <= n; i++)
	{
		if (i % 2 != 0)
		{
			printf("%d\t", i);
		}
	}
	return 0;
}