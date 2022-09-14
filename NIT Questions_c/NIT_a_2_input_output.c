// C program for Input/output of Integer, Character and Floating point numbers
#include<stdio.h>

int main(){
	int i;
	float f;
	char ch[30];
	printf("Enter an Integer: \n");
	scanf("%d", &i);
	printf("Enter a Character: \n");
	scanf("%s", &ch);
	printf("Enter a Float: \n");
	scanf("%f", &f);

	printf("Your chosen Integer is %d\n", i);
	printf("Your chosen Character is %s\n", ch);
	printf("Your chosen Float is %f\n", f);

	return 0;
}