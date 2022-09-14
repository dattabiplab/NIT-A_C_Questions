// Write a program in C to sort elements of array in ascending order.

#include <iostream>
using namespace std;

int main()
{
	int a[100], n, i = 0, temp, j = 0, k = 0;
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
		for (j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	cout << "Ascending Ordered Elements: ";
	for (i = 0; i < n; i++)
	{
		cout << a[i] << '\t';
	}
	return 0;
}