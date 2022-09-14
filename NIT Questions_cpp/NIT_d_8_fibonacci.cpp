//C Program to Display Fibonacci Sequence

#include <iostream>
using namespace std;

int main(){
	int n,i,a=-1,b=1,sum=0;
	cout<<"Enter a Number: ";
	cin>>n;
	printf("%d\t", sum);
	for(i=1;i<n;i++){
		a=b;
		b=sum;
		sum=a+b;
		cout<<sum<<'\t';
	}
	return 0;
}