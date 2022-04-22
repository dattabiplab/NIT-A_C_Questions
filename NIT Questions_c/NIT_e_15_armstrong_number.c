// C Program to Check Armstrong Number

#include <stdio.h>
int main()
{
	int num, originalNum, remainder, result = 0;
	printf("Enter a three-digit integer: ");
	scanf("%d", &num);
	originalNum = num;

	while (originalNum != 0)
	{
		// remainder contains the last digit
		remainder = originalNum % 10;

		result += remainder * remainder * remainder;

		// removing last digit from the orignal number
		originalNum /= 10;
	}

	if (result == num)
		printf("%d is an Armstrong number.", num);
	else
		printf("%d is not an Armstrong number.", num);

	return 0;
}

// #include <stdio.h>
// #include <math.h>
// int main()
// {
// 	long long int n, num;
// 	int count = 0, remainder, result = 0;
// 	printf("Enter a Number: ");
// 	scanf("%lld", &n);
// 	num = n;

// 	do
// 	{
// 		n /= 10;
// 		count++;
// 	} while (n != 0);
// 	while (count != 0)
// 	{
// 		remainder = n % 10;
// 		result = result + pow(remainder, count);
// 		n /= 10;
// 	}

// 	if (num == result)
// 	{
// 		printf("%lld is an Armstrong Number.", num);
// 	}
// 	else
// 	{
// 		printf("%lld is  not an Armstrong Number.", num);
// 	}

// 	return 0;
// }