//C Program to find area of a circle

#include<stdio.h>

int main(){
	float r, pi,area;

	printf("Enter The Radis of a Circle: \n");
	scanf("%f", &r);

	pi= 3.14;
	area= pi *r*r;

	printf("Areaof The Circle is %f unit square.", area);
	return 0;
}