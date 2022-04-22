//Write a C program to check whether a number is even or odd using conditional operator.

#include <stdio.h>

int main()
{
	int n;
	printf("Enter a Number: ");
	scanf("%d", &n);
	((n % 2) == 0) ? printf("%d is even", n) : printf("%d is odd", n);
	return 0;
}