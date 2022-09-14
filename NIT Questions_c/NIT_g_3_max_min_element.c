// Write a program in C to find the maximum and minimum element in an array.

#include <stdio.h>

int main()
{
	int n, i;
	double arr[100], max, min;
	printf("Enter The Number of Elements You Want: ");
	scanf("%d", &n);
	while (n > 100 || n < 1)
	{
		printf("Error!Number should be in range of 1 to 100\n.");
		printf("Enter The Number of Elements You Want: ");
		scanf("%d", &n);
	}
	for (i = 0; i < n; i++)
	{
		printf("Enter Number %d: ", i + 1);
		scanf("%lf", &arr[i]);
	}
	for (i = 0; i < n; i++)
	{
		if (arr[0] < arr[i])
		{
			arr[0] = arr[i];
			max = arr[0];
		}
		if (arr[1] > arr[i])
		{
			arr[1] = arr[i];
			min = arr[1];
		}
	}
	printf("Maximum Element is: %lf\n", max);
	printf("Minimum Element is: %lf\n", min);
	return 0;
}