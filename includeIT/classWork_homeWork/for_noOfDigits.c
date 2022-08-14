// Number of Digits using a For Loop
#include <stdio.h>

int main()
{
	int n = 12345;
	int count = 0;
	for (int i = n; i != 0; i /= 10)
		count++;
	printf("Number of Digits: %d", count);
	return 0;
}