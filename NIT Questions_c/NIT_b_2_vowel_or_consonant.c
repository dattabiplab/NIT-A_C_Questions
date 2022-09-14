//C Program to Check Whether a Character is Vowel or Consonant

#include<stdio.h>

int main(){
	char ch;
	printf("Enter a Character: \n");
	scanf("%c", &ch);

	if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
		ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
		{printf("The given Character %c is a Vowel.", ch);}
	else
	{printf("The given Character %c is a Consonant.", ch);}
	return 0;
}