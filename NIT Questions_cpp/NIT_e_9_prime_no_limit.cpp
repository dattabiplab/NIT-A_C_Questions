// C Program to print list of all Prime Number up to a certain Limit.

#include <iostream>
using namespace std;

int main()
{
	int i = 0, j, n, count;
	cout << "Enter a Number: ";
	cin >> n;
	while (i <= n)
	{
		j = 1;
		count = 0;
		while (j <= i)
		{
			if (i % j == 0)
			{
				count++;
			}
			j++;
		}
		if (count == 2)
		{
			cout << i << '\t';
		}
		i++;
	}
	return 0;
}