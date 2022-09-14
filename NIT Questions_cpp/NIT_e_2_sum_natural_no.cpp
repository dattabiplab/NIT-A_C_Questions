//C Program to Calculate the Sum of Natural Numbers

#include <iostream>
using namespace std;

int main(){
	int i=1,n,sum1=0,sum2;
	cout<<"Enter a Number: ";
	cin>>n;
	while(i<=n){
		sum1+=i;
		i++;
	}
	sum2=((n*n)+n)/2;
	cout<<"Sum is: "<<sum1<<endl;
	cout<<"Sum is: "<<sum2<<endl;
	return 0;
}