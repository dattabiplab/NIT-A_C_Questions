// C Program to Count Number of Digits in an Integer

#include <iostream>
using namespace std;

int main()
{
	long long n;
	int count = 0;
	cout << "Enter a Number: ";
	cin >> n;
	do
	{
		n /= 10;
		count++;
	} while (n != 0);
	cout << "Number of Digits is " << count;
	return 0;
}