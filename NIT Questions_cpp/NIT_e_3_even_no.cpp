//C Program to print all the even number up to n

#include <iostream>
using namespace std;

int main(){
	int i=0,n;
	cout<<"Enter a Number: ";
	cin>>n;
	while(i<=n){
		if(i%2==0){
		cout<<i<<'\t';
		}
		i++;
	}
	return 0;
}