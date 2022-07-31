#include <stdio.h>
#include <stdlib.h> //headerflie for abs

int main()
{
	float a, b, c;
	printf("Enter angles of a Triangle(a,b,c): ");
	scanf("%f%f%f", &a, &b, &c);
	float sum = abs(a) + abs(b) + abs(c);
	if (sum == 180)
		printf("Valid Triangle");

	else
		printf("Invalid Triangle");
	return 0;
}