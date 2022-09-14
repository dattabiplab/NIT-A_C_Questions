//C Program to print sum of all even & odd numbers up to n

#include <iostream>
using namespace std;

int main(){
	int i=0,n,oddSum=0,evenSum=0;
	cout<<"Enter a Number: ";
	cin>>n;
	while(i<=n){
		if(i%2==0){
		//cout<<i<<'\t';
		evenSum+=i;
		}
		else{
			//cout<<i<<'\t';
			oddSum+=i;
		}
		i++;
	}
	cout<<"Sum of Even Numbers is: "<<evenSum<<endl;
	cout<<"Sum of Odd Numbers is: "<<oddSum<<endl;
	return 0;
}