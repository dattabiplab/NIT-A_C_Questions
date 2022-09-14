//C Program to Check Whether a Number is Even or Odd

#include <stdio.h>

int main()
{
	int a;
	printf("Enter a Number:\n");
	scanf("%d", &a);

	if (a % 2 == 0)
	{
		printf("The given Number %d is Even", a);
	}
	else
	{
		printf("The given Number %d is Odd", a);
	}

	return 0;
}