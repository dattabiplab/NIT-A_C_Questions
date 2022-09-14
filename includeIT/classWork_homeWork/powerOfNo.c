#include <stdio.h>

int main()
{
	int exp, base;
	printf("Enter the Base & its Exponentiation: ");
	scanf("%d %d", &base, &exp);
	int ans = 1;
	for (int i = 1; i <= exp; ++i)
		ans *= base;
	printf("%d ^ %d = %d", base, exp, ans);
	return 0;
}