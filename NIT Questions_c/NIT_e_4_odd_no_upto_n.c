// C Program to print all the odd number up to n

#include <stdio.h>

int main()
{
	int i = 1, n;
	printf("Enter a Number: ");
	scanf("%d", &n);

	while (i <= n)
	{
		if (i % 2 != 0)
		{
			printf("%d\t", i);
		}
		i++;
	}
	return 0;
}