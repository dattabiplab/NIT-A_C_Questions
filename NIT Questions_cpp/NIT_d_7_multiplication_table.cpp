//C Program to Generate Multiplication Table

#include <iostream>
using namespace std;

int main(){
	int n,i,pdt=1;
	cout<<"Enter a Number: ";
	cin>>n;
	cout<<"*******Multiplication Table of "<<n<<"*******"<<endl;
	for(i=1;i<=10;i++){
		cout<<n<<" x "<<i<<" = "<<n*i<<endl;
	}
	return 0;
}