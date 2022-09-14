//C Program to Find the Largest Number Among Two Numbers

#include<stdio.h>

int main(){
	int a,b;
	printf("Enter 1st Number: \n");
	scanf("%d", &a);
	printf("Enter 2nd Number: \n");
	scanf("%d", &b);

	if (a>b)
	{printf("%d is Largest among %d and %d.", a,a,b);}
	else
	{printf("%d is Largest among %d and %d.", b,a,b);}

	return 0;
}