#include <stdio.h>

int main()
{
	int a;
	printf("Enter a Number To check it's divisible by 5 & 11: ");
	scanf("%d", &a);
	if ((a % 5 == 0) && (a % 11 == 0))
		printf("Its divisible");
	else
		printf("Not divisible");
	return 0;
}