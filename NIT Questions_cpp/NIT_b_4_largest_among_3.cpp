//C Program to Find the Largest Number Among Three Numbers

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
	if(a>b && a>c){
		cout<<a<<" is Largest among "<<a<<", "<<b<<", "<<c<<endl;
	}
	else if(b>c && b>a){
		cout<<b<<" is Largest among "<<a<<", "<<b<<", "<<c<<endl;
	}
	else{
		cout<<c<<" is Largest among "<<a<<", "<<b<<", "<<c<<endl;
	}
	return 0;
}