//Write a C program to check whether year is leap year or not using conditional operator.

#include <stdio.h>

int main()
{
	int yr;
	printf("Enter a Year: ");
	scanf("%d", &yr);

	((yr % 4 == 0) && (yr % 100 != 0)) ? printf("It's a Leap Year") : (yr % 400 == 0) ? printf("It's a Leap Year")
																					  : printf("It's not a Leap Year");

	return 0;
}