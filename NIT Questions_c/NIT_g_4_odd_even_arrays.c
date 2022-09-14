// Write a program in C to separate odd and even integers in separate arrays.

#include <stdio.h>

int main()
{
	int n, i, j = 0, k = 0;
	int arr1[10], arr2[10], arr3[10];
	printf("Enter the numbers of elements: ");
	scanf("%d", &n);
	while (n > 10 || n < 1)
	{
		printf("Error! number should in range of (1 to 10).\n");
		printf("Enter the number again: ");
		scanf("%d", &n);
	};
	for (i = 0; i < n; i++)
	{
		printf("Enter Number %d: ", i + 1);
		scanf("%d", &arr1[i]);
	}
	for (i = 0; i < n; i++)
	{
		if (arr1[i] % 2 == 0)
		{
			arr2[j] = arr1[i];
			j++;
		}
		else
		{
			arr3[k] = arr1[i];
			k++;
		}
	}
	printf("Even Numbers: \n");
	for (i = 0; i < j; i++)
	{
		printf("%d ", arr2[i]);
		printf("\t");
	}
	printf("\n");
	printf("Odd Numbers: \n");
	for (i = 0; i < k; i++)
	{
		printf("%d ", arr3[i]);
		printf("\t");
	}
	return 0;
}