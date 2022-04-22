//C Program to Find the Size of int, float, double and char

#include<stdio.h>

int main(){
	int i;
	float f;
	double d;
	char ch;

	printf("The size of int is %d\n", sizeof(i));
	printf("The size of float is %d\n", sizeof(f));
	printf("The size of double is %d\n", sizeof(d));
	printf("The size of char is %d\n", sizeof(ch));
	return 0;
}