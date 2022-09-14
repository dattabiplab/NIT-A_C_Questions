// C Program to Check Whether a Number is Palindrome or Not

#include <iostream>
using namespace std;

int main()
{
	long long n, num;
	int rev = 0, remainder;
	cout << "Enter a Number: ";
	cin >> n;
	num = n;
	while (n != 0)
	{
		remainder = n % 10;
		rev = rev * 10 + remainder;
		n /= 10;
	}
	if (rev == num)
	{
		cout << "Given Number " << num << " is a Palindrome Number.";
	}
	else
	{
		cout << "Given Number " << num << " is not a Palindrome Number.";
	}

	return 0;
}