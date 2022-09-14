//C Program to Find the Largest Number Among Three Numbers

#include<stdio.h>

int main(){
	int a,b,c;
	printf("Enter 1st Number: \n");
	scanf("%d", &a);
	printf("Enter 2nd Number: \n");
	scanf("%d", &b);
	printf("Enter 3rd Number: \n");
	scanf("%d", &c);

	if (a>b && a>c)
	{printf("%d is Largest among %d, %d and %d.", a,a,b,c);}
	else if (b>a && b>c)
	{printf("%d is Largest among %d, %d and %d.", b,a,b,c);}
	else
	{printf("%d is Largest among %d, %d and %d.", c,a,b,c);}

	return 0;
}