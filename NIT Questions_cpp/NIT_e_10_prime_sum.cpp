// C Program to find sum of prime numbers

#include <iostream>
using namespace std;

int main()
{
	int i = 2, j, n, count, sum = 0;
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
			sum += i;
		}
		i++;
	}
	cout << '\n';
	cout << "Sum of Prime Numbers Upto " << n << " is " << sum;
	return 0;
}