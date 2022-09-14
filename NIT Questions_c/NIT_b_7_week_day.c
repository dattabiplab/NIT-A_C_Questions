//Write a C program to input week number print week day.

#include<stdio.h>

int main(){
	int d;
	printf("Enter Day Number(Starting From Monday(=1)): \n");
	scanf("%d", &d);
	if (d==1)
	{printf("Your Selected Day Number is %d and Day is Monday.", d);}
	else if (d==2)
	{printf("Your Selected Day Number is %d and Day is Tuesday.", d);}
	else if (d==3)
	{printf("Your Selected Day Number is %d and Day is Wedday.", d);}
	else if (d==4)
	{printf("Your Selected Day Number is %d and Day is Thursday.", d);}
	else if (d==5)
	{printf("Your Selected Day Number is %d and Day is Friday.", d);}
	else if (d==6)
	{printf("Your Selected Day Number is %d and Day is Saturday.", d);}
	else
	{printf("Your Selected Day Number is %d and Day is Sunday.", d);}
	return 0;
}