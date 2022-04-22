//C Program to Check Leap Year.

#include<stdio.h>

int main(){
	int yr;
	printf("Enter a Year: \n");
	scanf("%d", &yr);
	if(yr%4==0 && yr%100!= 0 || yr%400 ==0)
	{printf("The given Year %d is a Leap Year", yr);}
	else
	{printf("The given Year %d is a Leap Year", yr);}

	return 0;
}