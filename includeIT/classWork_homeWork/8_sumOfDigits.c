// Write a C program to calculate sum of digits of a number

#include <stdio.h>

int main()
{
	int n;
	printf("Enter a Number: ");
	scanf("%d", &n);
	int sum = 0;
	while (n != 0)
	{
		sum += (n % 10);
		n /= 10;
	}
	printf("Sum of Digits: %d", sum);
	return 0;
}