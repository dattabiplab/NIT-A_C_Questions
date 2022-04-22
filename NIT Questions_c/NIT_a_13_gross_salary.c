//C Program to calculate gross salary of a person.
//Where DA is 12% of basic Salary, HR is 7% of basic Salary and TA is 5% of Basic Salary.

#include<stdio.h>

int main(){
	float DA,HR, TA, basic,gross;
	printf("Enter your Basic Salary: \n");
	scanf("%f", &basic);

	DA = (12*basic)/100;
	HR = (7*basic)/100;
	TA = (5*basic)/100;
	gross= basic + DA+ HR + TA;
	printf("Your Gross Salary is Rs.%f", gross);

	return 0;
}