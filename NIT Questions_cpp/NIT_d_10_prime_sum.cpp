//C Program to find sum of prime numbers

#include <iostream>
using namespace std;

int main(){
	int n,i,j,isprime,sum=0;
	cout<<"Enter a Number: ";
	cin>>n;
	for(i=2;i<=n;i++){
		isprime=1;
		for (j=2;j<=(i/2);j++){
			if(i%j==0){
				isprime=0;
				break;
			}
		}
		if(isprime==1)
		{
			cout<<i<<'\t';
			sum+=i;
		}
	}
	cout<<endl;
	cout<<"Sum of Prime Numbers Upto "<<n<<" is: "<<sum;
	return 0;
}