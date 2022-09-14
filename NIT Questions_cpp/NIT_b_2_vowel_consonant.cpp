//C Program to Check Whether a Character is Vowel or Consonant

#include <iostream>
using namespace std;

int main(){
	char ch;
	cout<<"Enter a Character: ";
	cin>>ch;
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
		cout<<ch<<" is a Vowel.";
	}
	else{
		cout<<ch<<" is a Consonant.";

	}
	return 0;
}