//C Program to find area of a triangle

#include<stdio.h>

int main(){
	float ht, b, area;

	printf("Enter The Height of a Triangle: \n");
	scanf("%f", &ht);
	printf("Enter The Base of a Triangle: \n");
	scanf("%f", &b);

	area = 0.5*ht*b;

	printf("Area of the Triangle is %f unit square.", area);
	return 0;
}