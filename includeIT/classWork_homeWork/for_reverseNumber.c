// Reverse a Number using a For Loop
#include <stdio.h>

int main()
{
	int n = 12345;
	int reverse = 0;
	for (int i = n; i != 0; i /= 10)
	{
		int lastDigit = i % 10;
		reverse = reverse * 10 + lastDigit;
	}
	printf("Reverse Number: %d", reverse);
	return 0;
}