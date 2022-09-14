//Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
// Basic Salary <= 10000 : HRA = 20%, DA = 80%
// Basic Salary <= 20000 : HRA = 25%, DA = 90%
// Basic Salary > 20000 : HRA = 30%, DA = 95%

#include<stdio.h>

int main(){
	float b,h,d,g;
	// b= basic salary
	// h=HRA
	// d=DA
	// g=gross
	printf("Enter Your Basic Salary: \n");
	scanf("%f", &b);

	if (b<= 10000)
	{h = 0.2*b; //((20*b)/100)
	 d= 0.8*b;}
	else if(b<=20000)
	{h = 0.25*b;
	 d= 0.9*b;}
	else
	{h = 0.3*b;
	 d= 0.95*b;}
	 g = b+h+d;
	 printf("Your Gross Salary is Rs. %.2f.", g);
	return 0;
}