// C Program to Make a Simple calculator.

#include <stdio.h>

int main()
{
	int a, b;
	char c;
	printf("Enter an Operator(+,-,*,/): ");
	scanf("%c", &c);
	printf("Enter 1st Number: ");
	scanf("%d", &a);
	printf("Enter 2nd Number: ");
	scanf("%d", &b);
	switch (c)
	{
	case '+':
		printf("%d + %d = %d", a, b, a + b);
		break;
	case '-':
		printf("%d - %d = %d", a, b, a - b);
		break;
	case '*':
		printf("%d * %d = %d", a, b, a * b);
		break;
	case '/':
		printf("%d / %d = %d", a, b, a / b);
		break;
	default:
		printf("Error! Operator is incorrect");
	}
	return 0;
}