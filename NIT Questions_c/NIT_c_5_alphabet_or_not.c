//Write a C program to check whether character is an alphabet or not using conditional operator.

#include <stdio.h>

int main()
{
	char ch;
	printf("Enter a Character: ");
	scanf("%s", &ch);
	((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) ? printf("Given Character is an alphabet") : printf("Given Character is not an alphabet");

	return 0;
}