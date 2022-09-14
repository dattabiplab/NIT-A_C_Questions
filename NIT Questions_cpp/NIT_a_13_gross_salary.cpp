//C Program to calculate gross salary of a person.
//Where DA is 12% of basic Salary, HR is 7% of basic Salary and TA is 5% of Basic Salary.

#include <iostream>
using namespace std;

int main(){
	float basic,da,hr,ta,gross;
	cout<<"Enter Your Basic Salary: "<<endl;
	cin>>basic;
	da=0.12*basic;
	hr=0.07*basic;
	ta=0.05*basic;
	gross=da+hr+ta+basic;
	cout<<"Your Gross Salary is Rs. "<<gross;
	return 0;
}