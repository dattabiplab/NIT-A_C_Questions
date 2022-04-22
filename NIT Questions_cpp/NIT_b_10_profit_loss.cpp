//Write a C program to calculate profit or loss.

#include <iostream>
using namespace std;

int main(){
	float m,cp,sp;
	cout<<"Enter Your Selling Price: ";
	cin>>sp;
	cout<<"Enter Your Cost Price: ";
	cin>>cp;
	if(sp>cp){
		cout<<"Your Profit is Rs. "<<sp-cp;
	}
	else if(cp>sp){
		cout<<"Your Loss is Rs. "<<cp-sp;
	}
	else{
		cout<<"Invalid Input";
	}

	return 0;
}