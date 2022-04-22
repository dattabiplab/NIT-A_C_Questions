// Print the numbers stored at the prime number locations of the array.
#include <stdio.h>

int main()
{
	int n, i, j, p;
	//int length;
	printf("\nEnter the size of an array: ");
	scanf("%d", &n);
	int a[n];
	for (i = 1; i <= n; i++)
	{
		printf("\nEnter array elements %d: ", i);
		scanf("%d", &a[i]);
	}
	// length = sizeof(a) / sizeof(int);
	//  printf("%d", length);
	printf("All Elements of Prime Number Locations:\n");
	for (i = 2; i <= n; i++)
	{
		j = 2;
		p = 1;
		while (j <= (i / 2))
		{
			if (i % j == 0)
			{
				p = 0;
				break;
			}
			j++;
		}
		if (p == 1)
		{
			printf("%d\t ", a[i]);
		}
	}
	return 0;
}