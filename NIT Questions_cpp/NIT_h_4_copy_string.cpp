// C Program to Copy a String

#include <iostream>
using namespace std;

int main()
{
	int count = 0, i;
	char a[150], b[500];
	cout << "Enter a String which to be Reversed: ";
	gets(a);
	while (a[count] != '\0')
	{
		count++;
	}
	for (i = 0; a[i] != '\0'; i++)
	{
		b[i] = a[i];
	}
	b[i] = '\0';
	cout << "Your Copied String is: ";
	puts(b);
	return 0;
}