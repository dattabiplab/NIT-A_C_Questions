#include <stdio.h>

int main()
{
	printf("Even Numbers are: ");
	for (int i = 1; i <= 20; i++)
	{
		if (i % 2 == 0)
			printf("%d\t", i);
	}
	// optimise way
	for (int i = 2; i <= 20; i += 2)
		printf("%d\t", i);
	return 0;
}