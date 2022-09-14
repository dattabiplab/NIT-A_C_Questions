// C program to check whether number is EVEN or ODD using switch.

#include <iostream>
using namespace std;

int main()
{
	long long int n;
	cout << "Enter a Number: ";
	cin >> n;
	switch (n % 2)
	{
	case 0:
		cout << "It's an Even Number.";
		break;
	case 1:
		cout << "It's an Odd Number.";
		break;
	default:
		cout << "Invalid Input";
		break;
	}
	return 0;
}