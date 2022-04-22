// C Program to Display Factors of a Number

#include <iostream>
using namespace std;

int main()
{
	int n, i = 1;
	cout << "Enter a Number: ";
	cin >> n;
	cout << "Factors of " << n << " are: ";
	while (i <= n)
	{
		if (n % i == 0)
		{
			cout << i << '\t';
		}
		i++;
	}
	return 0;
}