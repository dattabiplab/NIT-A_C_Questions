// C program to print right triangle star pattern series
//  *
//  * *
//  * * * *
//  * * * * * *

#include <stdio.h>

int main()
{
	int i, j, n;
	printf("Enter The Number of Rows You Want: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{

			printf("*");
		}
		printf("\n");
	}
	return 0;
}