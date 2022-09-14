// C Program to Copy a String

#include <stdio.h>

int main()
{
	int count = 0, i;
	char c1[150], c2[150];
	printf("Enter String 1: ");
	gets(c1);
	while (c1[count] != '\0')
	{
		count++;
	}
	for (i = 0; c1[i] != '\0'; i++)
	{
		c2[i] = c1[i];
	}
	c2[i] = '\0';
	printf("Your Copied String is:\n");
	puts(c2);
	return 0;
}