//Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
// For first 50 units Rs. 0.50/unit
// For next 100 units Rs. 0.75/unit
// For next 100 units Rs. 1.20/unit
// For unit above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill

#include<stdio.h>

int main(){
	float u,a,c,amt,sur,bill;
	printf("Enter Your Electricity Unit charges: \n");
	scanf("%f", &u);

	if(u<=50)
	{a= (0.50 *u);
	 amt =a;}

	else if (u<=150)
	{a=u-50;
	c=(0.75*a);
	amt = 25+c;}

	else if (u<=250)
	{a=(u-150);
	 c=(1.20*a);
	 amt= 100+c;} 	//amt= (100+ (1.20*(u-150)));

	else
	{a=(u-250);
	 c=(1.50*a);
	 amt = 220+c;}

	 sur = amt * 0.20;
	 bill= sur + amt;

	 printf("Your Total Electricity Bill is Rs. %.2f.", bill);

	return 0;
}