#include <stdio.h>

int main()
{
	int n, pdt = 1;
	printf("Enter a Number: ");
	scanf("%d", &n);
	if (n == 0)
		printf("%d", n + 1);
	else
	{
		for (int i = 1; i <= n; ++i)
			pdt *= i;
		printf("%d", pdt);
	}
	return 0;
}