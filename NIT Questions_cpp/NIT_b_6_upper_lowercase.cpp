//Write a C program to check whether a character is uppercase or lowercase alphabet.

#include <iostream>
using namespace std;

int main(){
	char ch;
	cout<<"Enter Any Character: ";
	cin>>ch;
	if(ch>'a' && ch<'z'){
		cout<<ch<<" is a Lowercase Character.";
	}
	else if (ch>'A' && ch<'Z'){
		cout<<ch<<" is a Uppercase Character.";
	}
	else{
		cout<<"Invalid Input.";
	}
	return 0;
}