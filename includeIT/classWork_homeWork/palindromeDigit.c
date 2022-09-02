#include <stdio.h>

int main()
{
	int dig;
	printf("Enter a Number: ");
	scanf("%d", &dig);
	int rev = 0;
	for (int i = dig; i != 0; i /= 10)
	{
		rev = (rev * 10) + (i % 10);
	}
	if (rev == dig)
		printf("Its Palindrome");
	else
		printf("Not Palindrome");
	return 0;
}