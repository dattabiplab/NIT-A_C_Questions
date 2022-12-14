// WAP to print area of rectangle, circle, square, cylinder, equilateral triangle by
// taking user input in same program

#include <stdio.h>
#include <string.h>

const float pi = 3.14;
const float root3by4 = 0.433;
int length, breadth, radius, height;

void rectangleArea(int length, int breadth)
{
	printf("Enter Length and Breadth of Rectangle: \n");
	scanf("%d %d", &length, &breadth);
	float ans = length * breadth;
	printf("Area of Rectangle is %.2f sq. unit\n", ans);
}
void squareArea(int length)
{
	printf("Enter Length of Square: \n");
	scanf("%d", &length);
	float ans = length * length;
	printf("Area of Square is %.2f sq. unit\n", ans);
}
void circleArea(int radius)
{
	printf("Enter Radius of Circle: \n");
	scanf("%d", &radius);
	float ans = pi * radius * radius;
	printf("Area of Circle is %.2f sq. unit\n", ans);
}
void triangleArea(int radius)
{
	printf("Enter Length of Equilateral Triangle: \n");
	scanf("%d", &length);
	float ans = root3by4 * length * length;
	printf("Area of Equilateral Triangle is %.2f sq. unit\n", ans);
}
void cylinderArea(int radius, int height)
{
	printf("Enter Radius and Height of Cylinder: \n");
	scanf("%d %d", &radius, &height);
	float csa = 2 * pi * radius * height;
	float tsa = 2 * pi * radius * (radius + height);
	printf("Curved Surface Area of Cylinder is %.2f sq. unit\n", csa);
	printf("Total Surface Area of Cylinder is %.2f sq. unit\n", tsa);
}
int main()
{
	char s[100];
	printf("Enter Shape of Figure: \n");
	gets(s);

	// strcmp returns 0 if both are equal and 1 if not equal .... !0 = 1
	// execution of if statements
	if (!strcmp(s, "rectangle"))
		rectangleArea(length, breadth);
	else if (!strcmp(s, "square"))
		squareArea(length);
	else if (!strcmp(s, "circle"))
		circleArea(radius);
	else if (!strcmp(s, "equilateral triangle"))
		triangleArea(length);
	else if (!strcmp(s, "cylinder"))
		cylinderArea(radius, height);
}