//C Program to Check Whether a Number is Even or Odd

#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter a Number: ";
	cin>>n;
	if(n%2==0){
		printf("%d is even.", n);
	}
	else{
		printf("%d is Odd.", n);

	}
	return 0;
}