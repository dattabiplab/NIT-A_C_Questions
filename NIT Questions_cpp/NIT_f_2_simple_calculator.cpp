// C Program to Make a Simple calculator.

#include <iostream>
using namespace std;

int main()
{
	float a, b;
	char c;
	cout << "Enter an Operator: ";
	cin >> c;
	cout << "Enter 1st Number: ";
	cin >> a;
	cout << "Enter 2nd Number: ";
	cin >> b;
	switch (c)
	{
	case '+':
		cout << a << " + " << b << " = " << a + b;
		break;
	case '-':
		cout << a << " - " << b << " = " << a - b;
		break;
	case '*':
		cout << a << " * " << b << " = " << a * b;
		break;
	case '/':
		cout << a << " / " << b << " = " << a / b;
		break;
	default:
		cout << "Invalid Input";
		break;
	}
	return 0;
}