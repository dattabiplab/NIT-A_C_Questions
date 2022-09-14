// C Program to Calculate Average of n (n < 10) numbers using arrays

#include <stdio.h>

int main()
{
	int i, n;
	float num[9], avg, sum = 0.0;
	printf("Enter the numbers of elements: ");
	scanf("%d", &n);
	while (n > 9 || n < 1)
	{
		printf("Error! number should in range of (1 to 9).\n");
		printf("Enter the number again: ");
		scanf("%d", &n);
	}
	for (i = 0; i < n; i++)
	{
		printf("%d. Enter Number: ", i + 1);
		scanf("%f", &num[i]);
		sum += num[i];
	}
	avg = sum / n;
	printf("Average: %.2f", avg);
	return 0;
}