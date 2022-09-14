//C Program to Swap Two Numbers using third variable

#include<stdio.h>

int main(){
	int a,b,c;

	printf("Enter 1st number: \n");
	scanf("%d", &a);
	printf("Enter 2nd number: \n");
	scanf("%d", &b);

	c=b;
	b=a;
	a=c;

	printf("After Swaping 1st Number is %d\n", a);
	printf("After Swaping 2nd Number is %d\n", b);

	return 0;
}