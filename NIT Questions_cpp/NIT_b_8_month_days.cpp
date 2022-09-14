//Write a C program to input month number and print number of days in that month.

#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter Any Month Number(January=1): ";
	cin>>n;
	if(n==1){
		cout<<"January has 31 Days.";
	}
	else if(n==2){
		cout<<"February has 28/29 Days.";
	}
	else if(n==3){
		cout<<"March has 31 Days.";
	}
	else if(n==4){
		cout<<"April has 30 Days.";
	}
	else if(n==5){
		cout<<"May has 31 Days.";
	}
	else if(n==6){
		cout<<"June has 30 Days.";
	}
	else if(n==7){
		cout<<"July has 31 Days.";
	}
	else if(n==8){
		cout<<"August has 31 Days.";
	}
	else if(n==9){
		cout<<"September has 30 Days.";
	}
	else if(n==10){
		cout<<"October has 31 Days.";
	}
	else if(n==11){
		cout<<"November has 30 Days.";
	}
	else if(n==12){
		cout<<"December has 31 Days.";
	}
	else{
		cout<<"Invalid Input";
	}
	return 0;
}