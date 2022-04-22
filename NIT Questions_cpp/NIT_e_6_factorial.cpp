//C Program to Find Factorial of a Number

#include <iostream>
using namespace std;

int main(){
	int i=1,n,pdt=1;
	cout<<"Enter a Number: ";
	cin>>n;
	while(i<=n){
		pdt*=i;
		i++;
	}
	cout<<"Factorial of "<<n<<" is "<<pdt;

	return 0;
}