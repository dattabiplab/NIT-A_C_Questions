// first & last digit of a number using a For Loop
#include <stdio.h>

int main()
{
	int n = 3445;
	int lastDigit = n % 10;
	while (n >= 10)
		n /= 10;
	printf("First Digit: %d", n);
	printf("\nLast Digit: %d", lastDigit);
	return 0;
}