#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c, x1, x2, d;
	printf("Enter a,b,c of a Quadratic Equation (ax^2 + bx + c = 0): ");
	scanf("%f %f %f", &a, &b, &c);
	d = (b * b) - (4 * a * c);
	if (d == 0)
	{
		x1 = (-b) / (2 * a);
		printf("Roots are Real & Equal: %.2f & %.2f", x1, x1);
	}
	else if (d > 0)
	{
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		printf("Roots are Real & Unique: %.2f & %.2f", x1, x2);
	}
	else
		printf("It gives Imaginary Roots");
	return 0;
}