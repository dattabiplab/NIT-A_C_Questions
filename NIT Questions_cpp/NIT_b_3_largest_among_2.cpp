//C Program to Find the Largest Number Among Two Numbers

#include <iostream>
using namespace std;

int main(){
	int a,b;
	cout<<"Enter 1st Number: ";
	cin>>a;
	cout<<"Enter 2nd Number: ";
	cin>>b;
	if(a>b){
		printf("%d is Largest.", a);
	}
	else{
		printf("%d is Largest.", b);

	}
	return 0;
}