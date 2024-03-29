#include <iostream>
#include <stdlib.h>
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


	// more optimised

	int m;
	scanf("%d", &m);
	m = abs(m);
	// feb month can't be printed
	switch ((m <= 7 && m % 2 != 0) || (m >= 8 && m <= 12 && m % 2 == 0))
	{
	case 1:
		printf("31");
		break;
	case 0:
		printf("30");
		break;
	default:
		printf("Invalid");
		break;
	}
	return 0;
}