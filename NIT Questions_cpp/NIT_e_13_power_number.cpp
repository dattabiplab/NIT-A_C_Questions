// C Program to Calculate the Power of a Number

#include <iostream>
using namespace std;

int main()
{
	int base, exp, e;
	long long result = 1;
	cout << "Enter The Base: ";
	cin >> base;
	cout << "Enter The Exponent: ";
	cin >> exp;
	e = exp;
	while (exp != 0)
	{
		result *= base;
		exp--;
	}
	cout << base << "^ " << e << " = " << result;
	return 0;
}