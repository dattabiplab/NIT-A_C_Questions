// C program to read weekday number and print
// weekday name using switch.

#include <stdio.h>

int main()
{
	int n;
	printf("Enter a Weekday Number(Monday=1): ");
	scanf("%d", &n);

	switch (n)
	{
	case 1:
		printf("Your Selected Weekday Number is %d and Week Day is Monday", n);
		break;
	case 2:
		printf("Your Selected Weekday Number is %d and Week Day is Tuesday", n);
		break;
	case 3:
		printf("Your Selected Weekday Number is %d and Week Day is Wednesday", n);
		break;
	case 4:
		printf("Your Selected Weekday Number is %d and Week Day is Thursday", n);
		break;
	case 5:
		printf("Your Selected Weekday Number is %d and Week Day is Friday", n);
		break;
	case 6:
		printf("Your Selected Weekday Number is %d and Week Day is Saturday", n);
		break;
	case 7:
		printf("Your Selected Weekday Number is %d and Week Day is Sunday", n);
		break;
	default:
		printf("Wrong Input");
		break;
	}
	return 0;
}