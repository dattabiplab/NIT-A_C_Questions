// Sum of Digits using a For Loop
#include <stdio.h>

int main()
{
	int n = 12345;
	int sum = 0;
	for (int i = n; i != 0; i /= 10)
	{
		int lastDigit = i % 10;
		sum += lastDigit;
	}
	printf("Sum of Digits: %d", sum);
	return 0;
}