//C Program to print list of all Prime Number up to a certain Limit.

#include <iostream>
using namespace std;

int main(){
	int n,i,j,isprime;
	cout<<"Enter a Number: ";
	cin>>n;
	for(i=2;i<=n;i++){
		isprime=1;
		for(j=2;j<=(i/2);j++){
			if(i%j==0){
				isprime=0;
				break;
			}
		}
		if (isprime==1){
			cout<<i<<'\t'<<endl;
		}
	}
	return 0;
}