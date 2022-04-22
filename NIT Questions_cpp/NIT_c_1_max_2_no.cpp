//Write a C program to find maximum between two numbers using conditional operator

#include <iostream>
using namespace std;

int main(){
	int a,b;
	cout<<"Enter 1st Number: ";
	cin>>a;
	cout<<"Enter 2nd Number: ";
	cin>>b;
	(a>b)?cout<<a<<" is maximum":cout<<b<<" is maximum";
	return 0;
}