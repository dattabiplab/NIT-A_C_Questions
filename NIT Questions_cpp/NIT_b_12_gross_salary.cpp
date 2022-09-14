//Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
// Basic Salary <= 10000 : HRA = 20%, DA = 80%
// Basic Salary <= 20000 : HRA = 25%, DA = 90%
// Basic Salary > 20000 : HRA = 30%, DA = 95%

#include <iostream>
using namespace std;

int main(){
	float b,hra,da,gross;
	cout<<"Enter Your Basic Salary: ";
	cin>>b;
	if(b<=10000){
		hra=b*0.20;
		da=b*0.80;
		gross=hra+da+b;
		cout<<"Your Gross Salary is Rs. "<<gross;
	}
	else if(b<=20000){
		hra=b*0.25;
		da=b*0.90;
		gross=hra+da+b;
		cout<<"Your Gross Salary is Rs. "<<gross;
	}
	else if(b>20000){
		hra=b*0.30;
		da=b*0.95;
		gross=hra+da+b;
		cout<<"Your Gross Salary is Rs. "<<gross;
	}
	else {
		cout<<"Invalid Input";
	}
	return 0;
}