//C Program to Calculate the Sum of Natural Numbers

#include <iostream>
using namespace std;

int main(){
	int n,i,sum=0;
	cout<<"Enter a Number: ";
	cin>>n;
	for(i=1;i<=n;i++){
		sum+=i;
	}
	cout<<"Your Sum is "<<sum;
	return 0;
}