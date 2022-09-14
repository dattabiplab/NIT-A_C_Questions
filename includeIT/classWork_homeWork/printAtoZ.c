#include <stdio.h>

int main()
{
	// for uppercase
	char ch;
	for (ch = 'A'; ch <= 'Z'; ch++)
		printf("%c\t", ch);

	// for lowercase
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
		printf("%c\t", ch);

	// by ascii values
	int ch;
	for (ch = 65; ch <= 90; ch++)
		printf("%c\t", ch);
	return 0;
}