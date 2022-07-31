// 3.A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
// Ask user for quantity
// Suppose, one unit will cost 100.
// Judge and print total cost for user.

#include <stdio.h>

int main()
{
	float quantity, cost, totalCost, discount;
	printf("Enter Number of Quantity: ");
	scanf("%f", &quantity);
	cost = 100 * quantity;
	if (cost > 1000)
	{
		discount = 0.1 * cost;
		totalCost = cost - discount;
		printf("Total Cost is Rs. %.2f", totalCost);
	}
	else
		printf("Total Cost is Rs. %.2f", cost);
	return 0;
}