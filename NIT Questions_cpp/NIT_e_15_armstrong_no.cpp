// C Program to Check Armstrong Number

#include <iostream>
using namespace std;

int main()
{
	long long n, num;
	int remainder, result = 0;
	cout << "Enter a Three Digit Number: ";
	cin >> n;
	num = n;
	while (n != 0)
	{
		remainder = n % 10;
		result += remainder * remainder * remainder;
		n /= 10;
	}
	if (result == num)
	{
		cout << "Given Number " << num << " is an Armstrong Number.";
	}
	else
	{
		cout << "Given Number " << num << " is not an Armstrong Number.";
	}

	return 0;
}