// 5.A student will not be allowed to sit in exam if his/her attendence is less than 75%.
// Take following input from user
// Number of classes held
// Number of classes attended.
// And print
// percentage of class attended
// Is student is allowed to sit in exam or not.

#include <stdio.h>

int main()
{
	float classHeld, classAttended, percentageCLassAttended;
	printf("Enter number of Classes Held & CLasses Attended: ");
	scanf("%f %f", &classHeld, &classAttended);
	percentageCLassAttended = (classAttended / classHeld) * 100;
	printf("Your Percentage of Class Attended is %.2f\n", percentageCLassAttended);
	if (percentageCLassAttended >= 75)
		printf("You are allowed to sit in exam");
	else
		printf("You are not allowed to sit in exam");
	return 0;
}