// Write a program in C to separate odd and even integers in separate arrays.

#include <iostream>
using namespace std;

int main()
{
	int a[100], n, i = 0, odd[100], even[100], j = 0, k = 0;
	cout << "Enter Number of Elements(1 to 100): ";
	cin >> n;
	while (n > 100 || n < 1)
	{
		cout << "Error! number should in range of (1 to 100)." << endl;
		cout << "Enter the number again: ";
		cin >> n;
	}
	for (i = 0; i < n; i++)
	{
		cout << "Enter Element number " << i + 1 << ": ";
		cin >> a[i];
	}
	for (i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			even[j] = a[i];
			j++;
		}
		else
		{
			odd[k] = a[i];
			k++;
		}
	}
	cout << "All Even Numbers of an array: ";
	for (i = 0; i < j; i++)
	{
		cout << even[i] << '\t';
	}
	cout << endl;
	cout << "All Odd Numbers of an array: ";
	for (i = 0; i < k; i++)
	{
		cout << odd[i] << '\t';
	}

	return 0;
}