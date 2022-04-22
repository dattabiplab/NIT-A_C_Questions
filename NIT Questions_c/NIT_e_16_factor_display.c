// C Program to Display Factors of a Number

#include <stdio.h>

int main()
{
	int i = 1, n;
	printf("Enter a Number: ");
	scanf("%d", &n);

	while (i <= n)
	{
		if (n % i == 0)
		{
			printf("%d\n", i);
		}
		i++;
	}

	return 0;
}