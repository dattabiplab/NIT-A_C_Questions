// Reverse a String Using Recursion

#include <stdio.h>
#include <ctype.h>

void reverse(char *str)
{
	if (*str)
	{
		reverse(str + 1);
		printf("%c", *str);
	}
}
int main()
{
	char s[500];
	printf("Enter a String: ");
	fgets(s, sizeof(s), stdin);
	printf("Your Reversed String is: \n");
	reverse(s);
	return 0;
}