// WAP to check user authentication using switch

#include <stdio.h>
#include <string.h>
int main()
{
	char userInput[50], password[50], userInputAgain[50], passwordAgain[50];
	printf("Enter Username: ");
	gets(userInput);
	printf("Enter Password: ");
	gets(password);
	printf("Again Enter Username: ");
	gets(userInputAgain);
	int value_user = strcmp(userInput, userInputAgain);
	int value_password;
	switch (value_user)
	{
	case 0:
		printf("Again Enter Password: ");
		gets(passwordAgain);
		value_password = strcmp(password, passwordAgain);
		switch (value_password)
		{
		case 0:
			printf("Authenticated");
			break;
		default:
			printf("Wrong User");
			break;
		}
		break;
	default:
		printf("Wrong User");
		break;
	}

	return 0;
}