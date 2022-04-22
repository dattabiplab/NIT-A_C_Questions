//C program to find square root of a number using sqrt function

#include<stdio.h>
#include<math.h>
int main(){
	double n,sq;
	printf("Enter the number you want to square root of : \n");
	scanf("%lf", &n);

	sq= sqrtf(n);
	printf("Square Root of the number %lf is %lf.", n, sq);

	return 0;
}