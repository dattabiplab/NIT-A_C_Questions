// C Program to Find Largest Element of an Array

#include <stdio.h>

int main()
{
	int n, i;
	double arr[100];
	printf("Enter the numbers of elements: ");
	scanf("%d", &n);
	while (n > 100 || n < 1)
	{
		printf("Error! number should in range of (1 to 100).\n");
		printf("Enter the number again: ");
		scanf("%d", &n);
	}
	for (i = 0; i < n; i++)
	{
		printf("Enter Number %d: ", i + 1);
		scanf("%lf", &arr[i]);
	}
	for (i = 1; i < n; i++)
	{
		if (arr[0] < arr[i])
		{
			arr[0] = arr[i];
		}
	}
	printf("Largest Number: %lf", arr[0]);
	return 0;
}