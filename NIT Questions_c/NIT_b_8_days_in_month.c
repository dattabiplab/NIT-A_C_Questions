//Write a C program to input month number and print number of days in that month.

#include<stdio.h>

int main(){
	int n;
	printf("Enter Month Number: \n");
	scanf("%d", &n);

	if (n==1||n==3||n==5||n==7||n==8||n==10||n==12)
	{printf("Your choosen Month Number is %d and it has 31 Days.", n);}

	else if (n==4 ||n==6 ||n==9 ||n==11)
	{printf("Your choosen Month Number is %d and it has 30 Days.", n);}

	else if (n==2)
	{printf("Your choosen Month Number is %d and it has 28 or 29 Days.", n);}

	else
	{printf("Invalid Month");}


	return 0;
}