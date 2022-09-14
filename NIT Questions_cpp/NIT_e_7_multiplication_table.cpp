//C Program to Generate Multiplication Table

#include <iostream>
using namespace std;

int main(){
	int i=1,n;
	cout<<"Enter a Number: ";
	cin>>n;
	cout<<"------------Multiplication Table of "<<n<<"------------"<<'\n'<<'\n'<<'\n';
	while(i<=10){
		cout<<n<<" x "<<i<<" = "<<n*i<<endl;
		i++;
	}
	return 0;
}