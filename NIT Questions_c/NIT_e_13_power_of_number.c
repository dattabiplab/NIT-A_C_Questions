// C Program to Calculate the Power of a Number

#include <stdio.h>

int main()
{
	int base, exp, e;
	long long int result = 1;
	printf("Enter the Base: ");
	scanf("%d", &base);
	printf("Enter the Exponent: ");
	scanf("%d", &exp);
	e = exp;

	while (exp != 0)
	{
		result *= base;
		exp--;
	}
	printf("%d^ %d = %lld", base, e, result);
	return 0;
}
