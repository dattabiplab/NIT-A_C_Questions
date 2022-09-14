// Prime or Not using a For Loop
#include <stdio.h>

int main()
{
	int n = 19;
	int i;
	for (i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			printf("Non-prime");
			break;
		}
	}
	if (i > n / 2)
		printf("Prime Number");
	return 0;
}