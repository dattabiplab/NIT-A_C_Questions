// Write a program in C to sort elements of array in ascending order.

#include <stdio.h>

int main()
{
	int n, i, j = 0, temp;
	int arr[10];
	printf("Enter the numbers of elements: ");
	scanf("%d", &n);
	while (n > 10 || n < 1)
	{
		printf("Error! number should in range of (1 to 10).\n");
		printf("Enter the number again: ");
		scanf("%d", &n);
	}
	for (i = 0; i < n; i++)
	{
		printf("Enter Number %d: ", i + 1);
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("Ascending Order Elements:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\t", arr[i]);
	}

	return 0;
}
