// C program to store temperature of two cities of a week and display it.

#include <stdio.h>

int main()
{
	int temp[10][10], c1 = 1, c2 = 1;
	printf("Enter Temperature of 2 Cities(in 'Celsius'): \n\n\n");
	for (c1 = 1; c1 <= 7; c1++)
	{
		printf("Temperature of Day %d-City A & City B: ", c1);
		for (c2 = 1; c2 <= 2; c2++)
		{
			scanf("%d", &temp[c1][c2]);
		}
	}
	printf("Temperature Chart of 2 Cities: \n");
	printf("City A: \t City B: \n");
	for (c1 = 1; c1 <= 7; c1++)
	{
		for (c2 = 1; c2 <= 2; c2++)
		{
			printf("%d  \t ", temp[c1][c2]);
		}
		printf("\n");
	}
	return 0;
}
