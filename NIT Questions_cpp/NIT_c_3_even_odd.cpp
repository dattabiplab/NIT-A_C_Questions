//Write a C program to check whether a number is even or odd using conditional operator.

#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter a Number: ";
	cin>>n;
	(n%2==0)?cout<<n<<" is Even.":cout<<n<<" is Odd.";
	return 0;
}