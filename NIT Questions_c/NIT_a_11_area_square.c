//C Program to find area of a Square

#include<stdio.h>

int main(){
	float s,area;

	printf("Enter The Side of a Square: \n");
	scanf("%f", &s);

	area = s*s;
	printf("Area of the Square is %f unit square.", area);

	return 0;
}