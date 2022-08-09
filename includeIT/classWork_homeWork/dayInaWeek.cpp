#include <iostream>
using namespace std;

int main()
{
	int day;
	cout << "Enter a Day number(sunday =1): " << endl;
	cin >> day;
	switch (day)
	{
	case 1:
		cout << "You Entered " << day << " which is Sunday" << endl;
		break;
	case 2:
		cout << "You Entered " << day << " which is Monday" << endl;
		break;
	case 3:
		cout << "You Entered " << day << " which is Tuesday" << endl;
		break;
	case 4:
		cout << "You Entered " << day << " which is Wednesday" << endl;
		break;
	case 5:
		cout << "You Entered " << day << " which is Thursday" << endl;
		break;
	case 6:
		cout << "You Entered " << day << " which is Friday" << endl;
		break;
	case 7:
		cout << "You Entered " << day << " which is Saturday" << endl;
		break;

	default:
		cout << "Invalid Input" << endl;
		break;
	}
	return 0;
}