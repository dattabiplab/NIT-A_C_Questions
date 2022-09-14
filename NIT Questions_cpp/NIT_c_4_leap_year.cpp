//Write a C program to check whether year is leap year or not using conditional operator.

#include <iostream>
using namespace std;

int main(){
	int yr;
	cout<<"Enter a Year: ";
	cin>>yr;
	(yr%4==0 && yr%100!=0 || yr%400==0)?cout<<yr<<" is a Leap Year.":cout<<yr<<" is not a Leap Year.";
	return 0;
}