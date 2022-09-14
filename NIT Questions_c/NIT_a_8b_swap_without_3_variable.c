//C Program to Swap Two Numbers  without using third variable

#include<stdio.h>

int main(){
	int a,b;

	printf("Enter 1st number: \n");
	scanf("%d", &a);
	printf("Enter 2nd number: \n");
	scanf("%d", &b);


	a=a+b;
	b=a-b;
	a=a-b;

	printf("After Swaping 1st Number is %d\n", a);
	printf("After Swaping 2nd Number is %d\n", b);
	return 0;
}