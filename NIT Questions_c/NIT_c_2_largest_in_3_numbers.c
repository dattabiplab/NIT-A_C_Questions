//Write a C program to find maximum between three numbers using conditional operator.

#include <stdio.h>

int main()
{
	int a, b, c, t, max;
	printf("Enter Three Numbers: ");
	scanf("%d%d%d", &a, &b, &c);

	t = (a > b) ? a : b;
	max = (t > c) ? t : c;
	printf("Maximum Value is %d", max);
	return 0;
}