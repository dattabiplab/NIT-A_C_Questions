// C program to Concatenate Two Strings

#include <iostream>
using namespace std;

int main()
{
	int i, count = 0;
	char a[500], b[150];
	cout << "Enter String 1: ";
	gets(a);
	cout << "Enter String 2: ";
	gets(b);
	while (a[count] != '\0')
	{
		count++;
	}
	for (i = 0; b[count] != '\0'; i++, count++)
	{
		a[count] = b[i];
	}
	a[count] = '\0';
	cout << "New String After Concatenation is: " << endl;
	puts(a);
	return 0;
}