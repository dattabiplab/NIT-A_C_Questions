// Write a C program to inpur electricity unit charge and calculate
// the total electricity bill according to the given condition:
// for first 50 units rs 0.50/unit
// for next 100 units rs 0.75/unit
// for next 100 units rs 1.20/unit
// for unit above 250 units rs 1.50/unit
// an additional surcharge of 20% is added to the bill

#include <stdio.h>

int main()
{
	float unit, amount;
	printf("Enter Your Unit Consumption: ");
	scanf("%f", &unit);
	if (unit <= 50)
		amount = 0.5 * unit;
	else if (unit > 50 && unit <= 150)
		amount = 25 + ((unit - 50) * 0.75); // 1st 50 units = 50 * 0.50 = 25 //1st 50 units has been reduced(unit-50)
	else if (unit > 150 && unit <= 250)
		amount = 100 + ((unit - 150) * 1.2); // 2nd 150 units = (50 * 0.50) + (100*0.75) = 25+75 = 100
	else if (unit > 250)
		amount = 220 + ((unit - 250) * 1.5); // 3rd 250 units = (50 * 0.50) + (100*0.75) +(100*1.20) = 25+75+120 = 220
	float bill = (amount * 0.2) + amount;
	printf("Total Electric Bill is Rs. %.2f", bill);
	return 0;
}