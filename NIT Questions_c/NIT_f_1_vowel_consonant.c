// C Program to find whether a character is vowel
// or consonant.

#include <stdio.h>

int main()
{
	char ch;
	printf("Enter a Character: ");
	scanf("%c", &ch);

	switch (ch)
	{
	case 'a':
		printf("%c is a Vowel", ch);
		break;
	case 'e':
		printf("%c is a Vowel", ch);
		break;
	case 'i':
		printf("%c is a Vowel", ch);
		break;
	case 'o':
		printf("%c is a Vowel", ch);
		break;
	case 'u':
		printf("%c is a Vowel", ch);
		break;
	case 'A':
		printf("%c is a Vowel", ch);
		break;
	case 'E':
		printf("%c is a Vowel", ch);
		break;
	case 'I':
		printf("%c is a Vowel", ch);
		break;
	case 'O':
		printf("%c is a Vowel", ch);
		break;
	case 'U':
		printf("%c is a Vowel", ch);
		break;

	default:
		printf("%c is a Consonant", ch);
		break;
	}
	return 0;
}