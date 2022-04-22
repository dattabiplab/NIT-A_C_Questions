// C Program to Reverse a String

#include <iostream>
using namespace std;

int main()
{
	int count = 0, i;
	char temp, st[100];
	cout << "Enter a String which to be Reversed: ";
	gets(st);
	while (st[count] != '\0')
	{
		count++;
		//cout << count<<'\t';
		//cout<<endl;
	}
	for (i = 0; i < (count / 2); i++)
	{
		temp = st[i];
		st[i] = st[count - 1 - i];
		st[count - 1 - i] = temp;
	}
	cout << "Reversed String is: " << st;
	return 0;
}