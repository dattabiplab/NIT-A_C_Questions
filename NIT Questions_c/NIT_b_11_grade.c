//Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
// Percentage >= 90% : Grade A
// Percentage >= 80% : Grade B
// Percentage >= 70% : Grade C
// Percentage >= 60% : Grade D
// Percentage >= 40% : Grade E
// Percentage < 40% : Grade F

#include<stdio.h>

int main(){
	float p,c,b,m,cm, total, per;
	printf("Enter Your Physics Marks: \n");
	scanf("%f",&p);
	printf("Enter Your Chemistry Marks: \n");
	scanf("%f",&c);
	printf("Enter Your Biology Marks: \n");
	scanf("%f",&b);
	printf("Enter Your Mathematics Marks: \n");
	scanf("%f",&m);
	printf("Enter Your Computer Marks: \n");
	scanf("%f",&cm);

	total = p+c+b+m+cm;
	per = ((total/500) * 100);
	if (per>=90)
	{printf("Your Percentage is %.2f and your Grade is A", per);}
	else if (per>=80)
	{printf("Your Percentage is %.2f and your Grade is B", per);}
	else if (per>=70)
	{printf("Your Percentage is %.2f and your Grade is C", per);}
	else if (per>=60)
	{printf("Your Percentage is %.2f and your Grade is D", per);}
	else if (per>=40)
	{printf("Your Percentage is %.2f and your Grade is E", per);}
	else
	{printf("Your Percentage is %.2f and your Grade is F", per);}

	return 0;
}