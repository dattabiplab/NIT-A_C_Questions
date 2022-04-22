// C Program to Add Two Matrix Using Multi-dimensional Arrays

#include <iostream>
using namespace std;

int main()
{
	int a[100][100], b[100][100], c[100][100];
	int r1, r2, c1, c2, i, j;
	cout << "Enter Order of 1st Matrix: ";
	cin >> r1 >> c1;
	cout << "Enter Order of 2nd Matrix: ";
	cin >> r2 >> c2;
	if (r1 != r2 || c1 != c2)
	{
		cout << "Matrix Addition is not possible.";
	}
	else
	{
		cout << "Enter Elements of 1st Order: " << endl;
		for (i = 0; i < r1; i++)
		{
			for (j = 0; j < c1; j++)
			{
				cout << "Enter Element a" << i + 1 << j + 1 << ": ";
				cin >> a[i][j];
			}
		}
		cout << "Enter Elements of 2nd Order: " << endl;
		for (i = 0; i < r2; i++)
		{
			for (j = 0; j < c2; j++)
			{
				cout << "Enter Element a" << i + 1 << j + 1 << ": ";
				cin >> b[i][j];
			}
		}
		cout << endl;
		for (i = 0; i < r2; i++)
		{
			for (j = 0; j < c2; j++)
			{
				c[i][j] = a[i][j] + b[i][j];
			}
		}
		cout << "Addition of Matrix a and b: " << endl;
		for (i = 0; i < r2; i++)
		{
			for (j = 0; j < c2; j++)
			{
				cout << c[i][j] << '\t';
			}
			cout << endl;
		}
	}
	return 0;
}