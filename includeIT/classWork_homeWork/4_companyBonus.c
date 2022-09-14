//4.A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
//Ask user for their salary and year of service and print the net bonus amount.

#include<stdio.h>

int main(){
	float salary,year,bonus,netBonus;
	printf("Enter your Salary & Year of Service: ");
	scanf("%f %f",&salary,&year);
	if(year>5){
		bonus = 0.05*salary;
		netBonus= salary+bonus;
		printf("Your net bonus salary is Rs. %.2f",netBonus);
	}
	else printf("Your salary is Rs. %.2f",salary);
	return 0;
}