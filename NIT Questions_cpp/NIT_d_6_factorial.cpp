//C Program to Find Factorial of a Number

#include <iostream>
using namespace std;

int main(){
	int n,i,pdt=1;
	cout<<"Enter a Number: ";
	cin>>n;
	for(i=1;i<=n;i++){
		pdt*=i;
	}
	cout<<"Factorial of "<<n<<" is "<<pdt;
	return 0;
}