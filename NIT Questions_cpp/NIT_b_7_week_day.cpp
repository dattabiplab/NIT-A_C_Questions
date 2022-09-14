//Write a C program to input week number print week day.

#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter a Week Day Number(Monday=1): ";
	cin>>n;
	if(n==1){
		cout<<"Your Weekday is Monday";
	}
	else if(n==2){
		cout<<"Your Weekday is Tuesday";
	}
	else if(n==3){
		cout<<"Your Weekday is Wednesday";
	}
	else if(n==4){
		cout<<"Your Weekday is Thursday";
	}
	else if(n==5){
		cout<<"Your Weekday is Friday";
	}
	else if(n==6){
		cout<<"Your Weekday is Saturday";
	}
	else if(n==7){
		cout<<"Your Weekday is Sunday";
	}
	else{
		cout<<"Invalid Input";
	}
	return 0;
}