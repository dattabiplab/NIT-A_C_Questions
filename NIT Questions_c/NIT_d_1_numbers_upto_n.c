// C Program to print all the number up to n

#include <stdio.h>

int main()
{
	int n, i;
	printf("Enter a Number: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		printf("%d\n", i);
	}
	return 0;
}