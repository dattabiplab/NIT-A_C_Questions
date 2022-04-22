// C program to Concatenate Two Strings

#include <stdio.h>

int main()
{
	int count = 0, j;
	char c1[150], c2[150];
	printf("Enter String 1: ");
	gets(c1);
	printf("Enter String 2: ");
	gets(c2);
	while (c1[count] != '\0')
	{
		count++;
	}
	for (j = 0; c2[j] != '\0'; j++, count++)
	{
		c1[count] = c2[j];
	}
	c1[count] = '\0';
	printf("New String after Concatenation:\n");
	puts(c1);

	return 0;
}