// C Program to multiply Two Matrix Using Multi-dimensional Arrays

#include <stdio.h>

int main()
{
	int r1, c1, r2, c2, i, j;
	int a[20][20], b[20][20], c[20][20];
	printf("Enter Order of 1st Matrix: ");
	scanf("%d %d", &r1, &c1);
	printf("Enter Order of 2nd Matrix: ");
	scanf("%d %d", &r2, &c2);

	if (r1 != r2 || c1 != c2)
	{
		printf("Matrix Multiplication is Not Possible.");
	}
	else
	{
		printf("Enter Elements of 1st Matrix:\n");
		for (i = 0; i < r1; i++)
		{
			for (j = 0; j < c1; j++)
			{
				printf("Enter Element a%d%d: ", i + 1, j + 1);
				scanf("%d", &a[i][j]);
			}
		}
		printf("\n");
		printf("Enter Elements of 2nd Matrix:\n");
		for (i = 0; i < r2; i++)
		{
			for (j = 0; j < c2; j++)
			{
				printf("Enter Element b%d%d: ", i + 1, j + 1);
				scanf("%d", &b[i][j]);
			}
		}
		printf("\n");
		for (i = 0; i < r1; i++)
		{
			for (j = 0; j < c1; j++)
			{
				c[i][j] = a[i][j] * b[i][j];
			}
		}
		printf("Multiplication of Matrix a and b =\n");
		for (i = 0; i < r1; i++)
		{
			for (j = 0; j < c1; j++)
			{
				printf(" %d  \t", c[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
