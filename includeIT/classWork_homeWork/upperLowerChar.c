#include <stdio.h>

int main()
{
	char c;
	printf("Enter a Character: ");
	scanf("%c", &c);
	if (c >= 'a' && c <= 'z')
		printf("Lower Character");
	else if (c >= 'A' && c <= 'Z')
		printf("Upper Character");
	else
		printf("Special Character");
	return 0;
}