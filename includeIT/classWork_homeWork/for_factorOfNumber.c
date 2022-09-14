// factor of a Number using a For Loop
#include <stdio.h>

int main()
{
	int n = 100;
	printf("Factors are: \n");
	for (int i = 1; i <= n / 2; i++)
		if (n % i == 0)
			printf("%d\t", i);
	return 0;
}