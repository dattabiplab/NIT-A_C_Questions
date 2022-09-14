//Write a C program to check whether a character is uppercase or lowercase alphabet.

#include<stdio.h>

int main(){
	char ch;
	printf("Enter a Character: \n");
	scanf("%c", &ch);
	if (ch>='A' && ch<='Z')
	{printf("The given Character %c is Uppercase.", ch);}
	else
	{printf("The given Character %c is Lowercase.", ch);}



	return 0;
}