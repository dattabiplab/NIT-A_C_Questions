#include <stdio.h>

int main()
{
	float a, b, c;
	printf("Enter sides of a Triangle(a,b,c): ");
	scanf("%f%f%f", &a, &b, &c);
	if (a == b || a == c || b == c)
	{
		if (a == c && a == b && b == c)
			printf("It's an Equilateral Triangle");
		else
			printf("It's an Iscoscales Triangle");
	}
	else
		printf("It's a Scalene Triangle");
	return 0;
}