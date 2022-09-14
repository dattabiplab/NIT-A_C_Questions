// WAP to create a basic calulator
#include <stdio.h>
int main()
{
	float a, b;
	char operator;
	printf("Enter the expression to calculate: ");
	scanf("%f%c%f", &a, &operator, & b);
	switch (operator)
	{
	case '+':
		printf("%.f%c%.f = %.f", a, operator, b, a + b);
		break;
	case '-':
		printf("%.f%c%.f = %.f", a, operator, b, a - b);
		break;
	case '*':
		printf("%.f%c%.f = %.f", a, operator, b, a * b);
		break;
	case '/':
		printf("%.f%c%.f = %.f", a, operator, b, a / b);
		break;
	default:
		printf("Invalid Input");
		break;
	}
	return 0;
}