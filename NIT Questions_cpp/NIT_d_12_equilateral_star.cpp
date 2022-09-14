//C program to print equilateral triangle or pyramid star pattern
//    *
//   * *
// 	* * *
// * * * *

#include <iostream>
using namespace std;

int main(){
	int n,i,j,k;
	cout<<"Enter The Number of Rows You Want: ";
	cin>>n;
	for(i=1;i<=n;i++){
		for(k=n-1; k>=i;k--){
			cout<<" ";
		}
		for(j=1;j<=i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}