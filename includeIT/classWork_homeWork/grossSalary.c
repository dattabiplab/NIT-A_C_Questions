#include <stdio.h>

int main()
{
	float basicSalary, hra, da;
	printf("Enter your Basic Salary: ");
	scanf("%f", &basicSalary);
	if (basicSalary < 10000)
	{
		hra = 0.2 * basicSalary;
		da = 0.8 * basicSalary;
	}
	else if (basicSalary >= 10000 && basicSalary < 20000)
	{
		hra = 0.25 * basicSalary;
		da = 0.9 * basicSalary;
	}
	else
	{
		hra = 0.3 * basicSalary;
		da = 0.85 * basicSalary;
	}
	printf("Gross Salary is %.2f", hra + da + basicSalary);
	return 0;
}