// 2.C program to check whether a number is a prime number or not.(for loop ja janle skip koria deu ida ami koramu)

#include <stdio.h>

int main()
{
	int n, count;
	printf("Enter a Number: ");
	scanf("%d", &n);
	count = 0;
	if (n == 1)
		printf("Not Prime\n");
	if (n == 2 || n == 3)
		printf("Is Prime\n");
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			count++;
			break;
		}
	}
	if (count == 1 && n != 1 && n != 2 && n != 3)
		printf("Not Prime");
	else if (n != 1 && n != 2 && n != 3)
		printf("Is Prime");
	return 0;
}