// Remove all characters in a string except alphabets
#include <stdio.h>
#include <ctype.h>
int main()
{
	char s[500];
	printf("Enter a String: ");
	fgets(s, sizeof(s), stdin);
	for (int i = 0, j; s[i] != '\0'; ++i)
	{
		while (!(s[i] >= 'a' && s[i] <= 'z') && !(s[i] >= 'A' && s[i] <= 'Z') && !(s[i] == '\0'))
		{
			for (j = i; s[j] != '\0'; ++j)
			{
				s[j] = s[j + 1];
			}
			s[j] = '\0';
		}
	}
	printf("New String: ");
	puts(s);
	return 0;
}