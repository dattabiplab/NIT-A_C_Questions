// C program to print Floyd's triangle
//  1
//  2 3
//  4 5 6
//  7 8 9 10

#include <stdio.h>

int main()
{
	int row, col, n, count = 1;
	printf("Enter The Number of Rows You Want: ");
	scanf("%d", &n);

	for (row = 1; row <= n; row++) // row=i
	{
		for (col = 1; col <= row; col++) // col=j
		{
			printf("%d ", count++);
		}
		printf("\n");
	}
	return 0;
}