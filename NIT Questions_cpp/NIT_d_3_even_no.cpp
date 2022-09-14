//C Program to print all the even number up to n

#include <iostream>
using namespace std;

int main(){
	int n,i;
	cout<<"Enter a Number: ";
	cin>>n;
	for(i=0;i<=n;i++){
		if(i%2==0){
			cout<<i<<'\t';
		}
	}
	return 0;
}