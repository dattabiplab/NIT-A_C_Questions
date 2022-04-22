// C Program to Find Largest Element of an Array

#include <iostream>
using namespace std;

int main()
{
	int a[100], n, i;
	cout << "Enter Number of Elements(1 to 100): ";
	cin >> n;
	while (n > 100 || n < 1)
	{
		cout << "Error! number should in range of (1 to 100)." << endl;
		cout << "Enter the number again: ";
		cin >> n;
	}
	for (i = 1; i <= n; i++)
	{
		cout << "Enter Element number " << i << ": ";
		cin >> a[i];
	}
	for (i = 1; i <= n; i++)
	{
		if (a[1] < a[i])
		{
			a[1] = a[i];
		}
	}
	cout << "Largest Number is " << a[1];
	return 0;
}