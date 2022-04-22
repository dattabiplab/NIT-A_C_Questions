// C Program to Calculate Average of n (n < 10) numbers using arrays

#include <iostream>
using namespace std;

int main()
{
	int a[100], n, i, sum = 0, avg;
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
		sum += a[i];
	}
	avg = sum / n;
	cout << "Average is: " << avg;
	return 0;
}