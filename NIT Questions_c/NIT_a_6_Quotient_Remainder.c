//C Program to Compute Quotient and Remainder

#include<stdio.h>

int main(){
	int a, b, c;

	printf("Enter 1st Number: \n");
	scanf("%d", &a);
	printf("Enter 2nd Number: \n");
	scanf("%d", &b);
	c = a%b;

	printf("Quotient when %d is divided by %d is %d\n",a,b, a/b);
	printf("Reminder when %d is divided by %d is %d",a,b, c);
	return 0;
}