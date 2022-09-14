// Write a C program to input electricity unit charges and calculate total electricity bill according to the
// given condition:
// For first 50 units Rs. 0.50/unit
// For next 100 units Rs. 0.75/unit
// For next 100 units Rs. 1.20/unit
// For unit above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill


#include <iostream>
using namespace std;

int main(){
	float u,bill,amt,surcharge;
	cout<<"Enter Your Electricity Unit: ";
	cin>>u;
	if(u<=50){
		amt=u*0.50;
	}
	else if(u>50 && u<=150){
		amt=25+ ((u-50)*0.75);
	}
	else if(u>150 && u<=250){
		amt=100+ ((u-150)*1.20);
	}
	else if(u>250){
		amt=220+ ((u-250)*1.50);
	}
	else{
		cout<<"Invalid Input!";
	}
	surcharge=amt*0.20;
	bill=amt+surcharge;
	cout<<"Your Electricity Bill is Rs. "<<bill;
	return 0;
}