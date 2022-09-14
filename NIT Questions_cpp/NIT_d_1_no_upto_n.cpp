//C Program to print all the number up to n

#include <iostream>
using namespace std;

int main(){
	int n,i;
	cout<<"Enter a Number: ";
	cin>>n;
	for(i=1;i<=n;i++){
		cout<<i<<'\t';
		cout<<i<<'\n';
	}
	return 0;
}