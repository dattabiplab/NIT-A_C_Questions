// C program to print equilateral triangle or pyramid star pattern
//     *
//    * *
//   * * *
//  * * * *

#include <stdio.h>

int main()
{
	int i, j, k, n;
	printf("Enter The Number of Rows You Want: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (k = n - 1; k >= i; k--)
		{
			printf(" ");
		}
		for (j = 1; j <= i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}

	return 0;
}