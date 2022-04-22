//C Program to Display Fibonacci Sequence

#include <iostream>
using namespace std;

int main(){
	int a=-1,b=1,i=1,n,c;
	cout<<"Enter a Number: ";
	cin>>n;
	while(i<=n){
		c=a+b;
		a=b;
		b=c;
		i++;
		cout<<c<<'\t';
	}
	return 0;
}