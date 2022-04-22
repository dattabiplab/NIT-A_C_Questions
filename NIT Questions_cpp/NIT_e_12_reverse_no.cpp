// C Program to Reverse a Number

#include <iostream>
using namespace std;

int main()
{
	int n, rev = 0, remainder, num;
	cout << "Enter a Number: ";
	cin >> n;
	num = n;
	while (n != 0)
	{
		remainder = n % 10;
		rev = rev * 10 + remainder;
		n /= 10;
	}
	cout << "Your Original Number is " << num << " and Your Reversed Number is " << rev;
	return 0;
}