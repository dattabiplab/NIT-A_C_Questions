//Write a C program to calculate profit or loss.

#include<stdio.h>

int main(){
	float cp, sp, profit, loss;

	printf("Enter Your Cost Price Rs. ");
	scanf("%f", &cp);
	printf("Enter Your Selling Price Rs. ");
	scanf("%f", &sp);

	profit = sp - cp;
	loss = cp - sp;

	if (sp>cp)
	{printf("Your Profit is Rs. %.2f.", profit);}
	else
	{printf("Your Loss is Rs. %.2f.", loss);}

	return 0;
}