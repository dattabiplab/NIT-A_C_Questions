// C Program to Find the Length of a String

#include <stdio.h>

int main()
{
	int count = 0;
	char ch[100];
	printf("Enter String: ");
	gets(ch);
	while (ch[count] != '\0')
	{
		count++;
	}
	printf("The String Length is %d.", count);
	return 0;
}