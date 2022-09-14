//C Program to Multiply two Floating Point Numbers

#include<stdio.h>

int main(){
	float a, b;

	printf("Enter First Floating Number: \n");
	scanf("%f", &a);
	printf("Enter Second Floating Number: \n");
	scanf("%f", &b);

	printf("Multiplication of %f and %f is %f",a,b, a*b);
	return 0;
}