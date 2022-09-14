// C program to find number of days in a month using switch case.

#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter a Number(January= 1): ";
	cin >> n;
	switch (n)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		cout << "This Month has 31 days.";
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		cout << "This Month has 30 days.";
		break;
	case 2:
		cout << "This Month has 28 days.";
		break;
	default:
		cout << "Invalid Input";
		break;
	}
	return 0;
}