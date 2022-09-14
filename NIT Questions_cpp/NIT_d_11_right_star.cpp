//C program to print right triangle star pattern series
// *
// * *
// * * *
// * * * *

#include <iostream>
using namespace std;

int main(){
	int n,i,j;
	cout<<"Enter The Number of Rows You Want: ";
	cin>>n;
	cout<<"*"<<endl;
	for(i=2;i<=n;i++){
		for(j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}