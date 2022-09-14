// Print the prime numbers of the array.
#include <stdio.h>
int main()
{
	int a[10], i, n, j;
	printf("Enter size of an array:");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Enter element number %d:", i + 1);
		scanf("%d", &a[i]);
	}
	printf("All prime list is:");
	for (i = 0; i < n; i++)
	{
		int count = 0;
		for (j = 1; j <= a[i]; j++)
		{
			if (a[i] % j == 0)
			{
				count++;
			}
		}

		if (count == 2) /// it means only the  number which can divided by 2 numbers will be printed(1st no.=1, 2nd no. = by itself)
		{
			printf("%d\t", a[i]);
		}
	}

	return 0;
}

/////////***********OR************/////////

// #include <stdio.h>
// int main()
// {
// 	int arr[10], i, n, j, count;
// 	printf("Enter size of an array:");
// 	scanf("%d", &n);
// 	for (i = 0; i < n; i++)
// 	{
//		printf("Enter element number %d:", i + 1);
// 		scanf("%d", &arr[i]);
// 	}
// 	printf("All prime list is:");
// 	for (i = 0; i < n; i++)
// 	{
// 		j = 1;
// 		count = 0;
// 		while (j <= arr[i])
// 		{
// 			if (arr[i] % j == 0)
// 			{
// 				count++;
// 			}
// 			j++;
// 		}
// 		if (count == 2)
// 		{
// 			printf("%d ", arr[i]);
// 		}
// 	}

// 	return 0;
// }