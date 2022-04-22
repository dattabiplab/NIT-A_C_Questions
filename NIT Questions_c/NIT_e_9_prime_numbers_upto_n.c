// C Program to print list of all Prime Number up to a certain Limit.

#include <stdio.h>

int main()
{
	int i = 0, j, n, count;
	printf("Enter a Number: ");
	scanf("%d", &n);
	while (i <= n)
	{
		j = 1;
		count = 0;
		while (j <= i)
		{
			if (i % j == 0)
			{
				count++;
			}
			j++;
		}
		if (count == 2)
		{
			printf("%d\t", i);
		}
		i++;
	}
	return 0;
}