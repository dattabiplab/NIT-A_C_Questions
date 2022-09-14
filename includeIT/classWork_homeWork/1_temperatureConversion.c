// 1. C program to convert temperature from Fahrenheit to Celsius and Celsius to Fahrenheit

#include <stdio.h>

int main()
{
	float tempF, tempC, fahrenheit, celsius;
	printf("Enter Temperature in degree Fahrenheit: ");
	scanf("%f", &tempF);
	celsius = ((tempF - 32) * 5) / 9;
	printf("Temperature in Celsius is %.1f\n\n", celsius);
	printf("Enter Temperature in degree Celsius: ");
	scanf("%f", &tempC);
	fahrenheit = ((tempC * 9) / 5) + 32;
	printf("Temperature in Fahrenheit is %.1f\n", fahrenheit);
	return 0;
}