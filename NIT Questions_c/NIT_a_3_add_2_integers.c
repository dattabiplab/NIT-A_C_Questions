//C Program to Add Two Integers

#include<stdio.h>

int main(){
	int a, b;

	printf("Enter First Integer: \n");
	scanf("%d", &a);
	printf("Enter Second Integer: \n");
	scanf("%d", &b);

	printf("Addition of %d and %d is %d",a,b, a+b);
	return 0;
}