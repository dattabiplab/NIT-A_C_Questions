//C Program to Check Leap Year.

#include <iostream>
using namespace std;

int main(){
	int yr;
	cout<<"Enter A Year: ";
	cin>>yr;
	if(yr%4==0 && yr%100!=0 || yr%400==0){
		cout<<yr<<" is a Leap Year.";
	}
	else{
		cout<<yr<<" is not a Leap Year.";
	}
	return 0;
}