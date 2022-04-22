//Write a C program to find all roots of a quadratic equation.

#include<stdio.h>
#include<math.h>

int main(){
	double a,b,c, D,x1,x2,x3,r;

	//printf("Enter The Values of a,b,c(ax^2 + bx + c=0): \n");
	//scanf("%d %d %d", &a, &b, &c);
	printf("Enter The Value of a(ax^2 + bx + c=0): \n");
	scanf("%lf", &a);
	printf("Enter The Value of b(ax^2 + bx + c=0): \n");
	scanf("%lf", &b);
	printf("Enter The Value of c(ax^2 + bx + c=0): \n");
	scanf("%lf", &c);
	D= (pow(b,2) - 4*a*c);
	x1 = (((-b) + sqrt(D))/(2*a));
	x2 = (((-b) - sqrt(D))/(2*a));
	r = ((sqrt(-D))/(2*a));
	x3 = ((-b)/(2*a));

	if (D>=0)
	{printf("The Roots of equation are %lf and %lf.", x1, x2);}
	else
	{printf("The Roots of equation are %.2lf+%.2lfi and %.2lf-%.2lfi.", x3, r, x3, r);}

	return 0;
}