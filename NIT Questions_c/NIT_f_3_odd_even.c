// C program to check whether number is EVEN
// or ODD using switch.

#include <stdio.h>

int main()
{
	int n;
	printf("Enter a Number: ");
	scanf("%d", &n);

	switch (n % 2)
	{
	case 0:
		printf("%d is EVEN", n);
		break;
	case 1:
		printf("%d is ODD", n);
		break;
	}

	return 0;
}