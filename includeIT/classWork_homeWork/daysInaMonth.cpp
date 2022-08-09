#include <iostream>
using namespace std;

int main()
{
	int month;
	cout << "Enter a Month number(January =1): " << endl;
	cin >> month;

	// int var31,var30;
	// var31 = 1 || 3 || 5 || 7 || 8 || 10 || 12;
	// var30 = 4 || 6 || 9 || 11;

	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		cout << "This month has 31 Days" << endl;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		cout << "This month has 30 Days" << endl;
		break;
	case 2:
		cout << "This month has 28 or 29 Days" << endl;
		break;
	default:
		cout << "Invalid Input";
		break;
	}
	return 0;
}