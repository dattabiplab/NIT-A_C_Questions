// Write a C program to calculate the sum of the numbers occuring in the multiplicaton table of 8 (consider 8*1 to 8*10)

#include <stdio.h>

int main()
{
	int i, sum = 0;
	for (i = 1; i <= 10; i++)
	{
		sum += (8 * i);
	}
	printf("Sum of the numbers occuring in the multiplicaton table of 8 (consider 8*1 to 8*10): \n\n");
	for (i = 1; i <= 9; i++)
	{
		printf("(8*%d) + ", i);
	}
	printf("(8*10) = ");
	printf("%d", sum);
	return 0;
}