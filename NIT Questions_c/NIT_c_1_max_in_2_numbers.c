// Write a C program to find maximum between two numbers
// using conditional operator.

#include <stdio.h>

int main()
{
	int a, b;
	printf("Enter First Number: ");
	scanf("%d", &a);
	printf("Enter Second Number: ");
	scanf("%d", &b);

	(a > b) ? printf("%d is greater than %d", a, b)
			: printf("%d is greater than %d", b, a);

	return 0;
}