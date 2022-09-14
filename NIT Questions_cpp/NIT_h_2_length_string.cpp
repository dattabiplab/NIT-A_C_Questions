// C Program to Find the Length of a String

#include <iostream>
using namespace std;

int main()
{

	int count = 0;
	char st[100];
	cout << "Enter a String: ";
	gets(st);
	while (st[count] != '\0')
	{
		count++;
		// cout << count<<'\t';
		// cout<<endl;
	}
	cout << "Length of The String is " << count;
	return 0;
}