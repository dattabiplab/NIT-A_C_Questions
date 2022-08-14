// Product of Digits using a For Loop
#include <stdio.h>

int main()
{
	int n = 12345;
	int pdt = 1;
	for (int i = n; i != 0; i /= 10)
	{
		int lastDigit = i % 10;
		pdt *= lastDigit;
	}
	printf("Product of Digits: %d", pdt);
	return 0;
}