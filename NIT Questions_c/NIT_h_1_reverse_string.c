// C Program to Reverse a String

#include <stdio.h>

int main()
{
	int count = 0, i;
	char temp, ch[100];
	printf("Enter a String to be Reversed:\n");
	gets(ch);
	while (ch[count] != '\0')
	{
		count++;
	}
	// printf("The Length of the String is %d.\n", count);

	for (i = 0; i < (count / 2); i++)
	{
		temp = ch[i];
		ch[i] = ch[count - 1 - i];
		ch[count - 1 - i] = temp;
	}
	printf("Reversed String is: ");
	puts(ch);

	return 0;
}