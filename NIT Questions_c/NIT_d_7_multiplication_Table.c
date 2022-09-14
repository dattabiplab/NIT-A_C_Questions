// C Program to Generate Multiplication Table

#include <stdio.h>

int main()
{
	int n, i;
	printf("Enter The Number Who's Multiplaction Table You Want: ");
	scanf("%d", &n);
	printf("************Multiplication Table of %d************\n\n", n);
	for (i = 1; i <= 10; i++)
	{
		printf("%d x %d = %d\n", n, i, n * i);
	}
	return 0;
}