// C Program to Swap Two Numbers  using Third Variable

#include <iostream>
using namespace std;

int main(){
	int a,b,temp;
	cout<<"Enter 1st Integer:\n";
	cin>>a;
	cout<<"Enter 2nd Integer:\n";
	cin>>b;
	temp=a;
	a=b;
	b=temp;
	cout<<"After Swapping Value of a and b is "<<a<<" and "<<b<<"."<<endl;
	return 0;
}