//Write a C program to check whether character is an alphabet or not using conditional operator.

#include <iostream>
using namespace std;

int main(){
	char ch;
	cout<<"Enter a Character: ";
	cin>>ch;
	((ch>'a' && ch<'z') ||(ch>'a' && ch<'z'))?cout<<ch<<" is an Alphabet":cout<<ch<<" is not an Alphabet";
	return 0;
}