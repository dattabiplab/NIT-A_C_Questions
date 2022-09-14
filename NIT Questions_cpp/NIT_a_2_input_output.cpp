//C program for Input/output of Integer, Character and Floating point numbers

#include <iostream>
using namespace std;

int main(){
	int i;
	float f;
	string ch;
	cout<<"Enter a Integer:\n";
	cin>>i;
	cout<<"Enter a Floating point number:\n";
	cin>>f;
	cout<<"Enter a String:\n";
	cin>>ch;
	cout<<"Your Integer is "<<i<<"."<<endl;
	cout<<"Your Floating Point Number is "<<f<<"."<<endl;
	cout<<"Your String is "<<ch<<"."<<endl;
	return 0;
}