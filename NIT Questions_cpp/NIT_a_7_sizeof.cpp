//C Program to Find the Size of int, float, double and char

#include <iostream>
using namespace std;

int main(){
	int i;
	float f;
	char ch;
	double d;
	cout<<"Enter a Integer:\n";
	cin>>i;
	cout<<"Enter a Floating point number:\n";
	cin>>f;
	cout<<"Enter a Character:\n";
	cin>>ch;
	cout<<"Enter a Double:\n";
	cin>>d;

	cout<<"Size of Integer is "<<sizeof(i)<<"."<<endl;
	cout<<"Size of Floating Point Number is "<<sizeof(f)<<"."<<endl;
	cout<<"Size of Character is "<<sizeof(ch)<<"."<<endl;
	cout<<"Size of Double is "<<sizeof(d)<<"."<<endl;
	return 0;
}