//Write a C program to find maximum between three numbers using conditional operator.

#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	cout<<"Enter 1st Number: ";
	cin>>a;
	cout<<"Enter 2nd Number: ";
	cin>>b;
	cout<<"Enter 3rd Number: ";
	cin>>c;
	(a>b && a>c)?cout<<a<<" is maximum":(b>a && b>c)?cout<<b<<" is maximum":cout<<c<<" is maximum";
	return 0;
}