#include <stdio.h>

int main()
{
	printf("In correct order:\n");
	for (int i = 1; i <= 10; i++)
		printf("%d\t", i);
	printf("\nIn reverse order:\n");
	for (int i = 10; i >= 1; i--)
		printf("%d\t", i);
	return 0;
}