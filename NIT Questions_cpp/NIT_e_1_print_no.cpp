//Program to print all the number up to n

#include <iostream>
using namespace std;

int main(){
	int i=1,n;
	cout<<"Enter a Number: ";
	cin>>n;
	while(i<=n){
		cout<<i<<endl;
		i++;
	}
	return 0;
}