// Find the Number of Vowels, Consonants, Digits and White Spaces

#include <stdio.h>
#include <ctype.h>

int main()
{
	int v, con, dig, space;
	v = con = dig = space = 0;
	char s[500];
	printf("Enter a String: ");
	fgets(s, sizeof(s), stdin);
	for (int i = 0; s[i] != '\0'; ++i)
	{
		s[i] = tolower(s[i]);
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
		{
			++v;
		}
		else if ((s[i] >= 'a' && s[i] <= 'z'))
		{
			++con;
		}
		else if ((s[i] >= '0' && s[i] <= '9'))
		{
			++dig;
		}
		else if (s[i] == ' ')
		{
			++space;
		}
	}
	printf("Number of Vowels: %d.\n", v);
	printf("Number of Consonants: %d.\n", con);
	printf("Number of Digits: %d.\n", dig);
	printf("Number of White Space: %d.\n", space);
	return 0;
}