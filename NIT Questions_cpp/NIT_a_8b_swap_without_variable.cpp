// C Program to Swap Two Numbers without using Third Variable

#include <iostream>
using namespace std;

int main(){
	int a,b,temp;
	cout<<"Enter 1st Integer:\n";
	cin>>a;
	cout<<"Enter 2nd Integer:\n";
	cin>>b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"After Swapping Value of a and b is "<<a<<" and "<<b<<"."<<endl;

	return 0;
}
