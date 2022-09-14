//C program to print Floyd's triangle
// 1
// 2 3
// 4 5 6
// 7 8 9

#include <iostream>
using namespace std;

int main(){
	int row,col,n,count=1;
	cout<<"Enter The Number of Rows You Want: ";
	cin>>n;
	for(row=1;row<=n;row++){
		for(col=1;col<=row;col++){
			cout<<count++<<" ";
		}
		cout<<endl;
	}
	return 0;
}