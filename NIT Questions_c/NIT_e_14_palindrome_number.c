// C Program to Check Whether a Number is Palindrome or Not

#include <stdio.h>

int main()
{
	int rem, rev = 0, number, n;
	printf("Enter The Number: ");
	scanf("%d", &n);
	number = n;

	while (n != 0)
	{
		rem = n % 10;
		rev = rev * 10 + rem;
		n /= 10;
	}
	if (number == rev)
	{
		printf("The given Number %d is a Palindrome.", number);
	}
	else
	{
		printf("The given Number %d is not a Palindrome.", number);
	}

	return 0;
}