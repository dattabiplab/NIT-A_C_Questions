#include <stdio.h>

int main()
{
	float cp, sp, value;
	printf("Enter your Cost Price & Selling Prince: ");
	scanf("%f %f", &cp, &sp);
	if (cp > sp)
		printf("Loss is %.2f", cp - sp);
	else if (cp < sp)
		printf("Profit is %.2f", sp - cp);
	else
		printf("Nor Profit nor Loss");
	return 0;
}