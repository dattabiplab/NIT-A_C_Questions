// Write a C program to count number of digits in a number

#include <stdio.h>

int main()
{
	int n;
	printf("Enter a Number: ");
	scanf("%d", &n);
	int count = 0;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	printf("Number of Digits: %d", count);
	return 0;
}