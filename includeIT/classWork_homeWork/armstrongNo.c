// Armstrong Numbers for Any number of Digits
#include <stdio.h>
#include <math.h>

int main()
{
	int dig, num, count = 0;
	printf("Enter a Number: ");
	scanf("%d", &dig);
	num = dig;
	while (num != 0)
	{
		count++;
		num /= 10;
	}
	int sum = 0;
	num = dig;
	while (dig != 0)
	{
		sum += floor(pow((dig % 10), count));
		dig /= 10;
	}
	if (num == sum)
		printf("It's an Armstrong Number");
	else
		printf("Not an Armstrong Number");
	return 0;
}