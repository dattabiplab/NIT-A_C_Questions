// Write a C program to input amount from user and print minimum number of notes (Rs. 500,100, 50, 20, 10, 5, 2, 1) requires for the amount. How to the minimum number of notes requires for the given amount in C programming. Program to find minimum number of notes required for the given denomination. Logic to find minimum number of denomination for a given amount in C program.

#include <stdio.h>

int main()
{
	int rs,n500,n100,n50,n20,n10,n5,n2,n1;
	printf("Enter the amount of money: ");
	scanf("%d", &rs);
	n500=n100=n50=n20=n10=n5=n2=n1=0;

	// code for money more than 500
	if(rs>=500){
		n500=(rs/500);
		rs-=(n500*500);
	}
	// code for money less than 500 & greater than 100
	if(rs>=100){
		n100=(rs/100);
		rs-=(n100*100);
	}
	// code for money less than 100 & greater than 50
	if(rs>=50){
		n50=(rs/50);
		rs-=(n50*50);
	}
	// code for money less than 50 & greater than 20
	if(rs>=20){
		n20=(rs/20);
		rs-=(n20*20);
	}
	// code for money less than 20 & greater than 10
	if(rs>=10){
		n10=(rs/10);
		rs-=(n10*10);
	}
	// code for money less than 10 & greater than 5
	if(rs>=5){
		n5=(rs/5);
		rs-=(n5*5);
	}
	// code for money less than 5 & greater than 2
	if(rs>=2){
		n2=(rs/2);
		rs-=(n2*2);
	}
	// code for money less than 2 & greater than 1
	if(rs>=1){
		n1=(rs/1);
		rs-=(n1*1);
	}
	//printing no. of notes
	printf("500 note: %d\n100 note: %d\n50 note: %d\n20 note: %d\n10 note: %d\n5 note: %d\n2 note: %d\n1 note: %d",n500,n100,n50,n20,n10,n5,n2,n1);
	printf("\nTotal number of notes: %d",n500+n100+n50+n20+n10+n5+n2+n1);
	return 0;
}