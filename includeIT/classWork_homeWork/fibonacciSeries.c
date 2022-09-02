#include <stdio.h>

int main()
{
	int n, n1, n2, n3;
	printf("Enter a Number: ");
	scanf("%d", &n);
	n1 = 0;
	n2 = 1;
	printf("%d\t%d\t", n1, n2);
	for (int i = 2; i < n; ++i)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		printf("%d\t", n3);
	}
	return 0;
}