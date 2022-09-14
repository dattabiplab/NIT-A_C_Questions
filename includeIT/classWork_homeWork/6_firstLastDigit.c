// Write a C program to find first and last digit of a number

#include <stdio.h>

int main()
{
	int n, num, firstDigit;
	printf("Enter a Number: ");
	scanf("%d", &n);
	num = n;
	while (n != 0)
	{
		firstDigit = n % 10;
		n /= 10;
	}
	printf("First Digit: %d\n", firstDigit);
	printf("Last Digit: %d\n", num % 10);
	return 0;
}
