// Program to print all the number up to n

#include <stdio.h>

int main()
{
	int i = 1, n;
	printf("Enter a Number: ");
	scanf("%d", &n);

	while (i <= n)
	{
		printf("%d\n", i);
		i++;
	}

	return 0;
}