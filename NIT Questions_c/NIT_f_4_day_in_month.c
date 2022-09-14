// C program to find number of days in a month
// using switch case.

#include <stdio.h>

int main()
{
	int n;
	printf("Enter a Number for Month(January=1): ");
	scanf("%d", &n);

	switch (n)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("This Month has 31 Days");
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		printf("This Month has 30 Days");
		break;
	case 2:
		printf("This Month has 28 Days");
		break;
	default:
		printf("Wrong Input");
		break;
	}
	return 0;
}