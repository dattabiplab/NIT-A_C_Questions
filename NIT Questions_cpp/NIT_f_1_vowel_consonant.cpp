// C Program to find weather a character is vowel or consonant.

#include <iostream>
using namespace std;

int main()
{
	char ch;
	cout << "Enter a Character: ",
		cin >> ch;
	switch (ch)
	{
	case 'a':
		cout << "The Given Character is a Vowel";
		break;
	case 'e':
		cout << "The Given Character is a Vowel";
		break;
	case 'i':
		cout << "The Given Character is a Vowel";
		break;
	case 'o':
		cout << "The Given Character is a Vowel";
		break;
	case 'u':
		cout << "The Given Character is a Vowel";
		break;
	case 'A':
		cout << "The Given Character is a Vowel";
		break;
	case 'E':
		cout << "The Given Character is a Vowel";
		break;
	case 'I':
		cout << "The Given Character is a Vowel";
		break;
	case 'O':
		cout << "The Given Character is a Vowel";
		break;
	case 'U':
		cout << "The Given Character is a Vowel";
		break;
	default:
		cout << "The Given Character is a Consonant";
		break;
	}
	return 0;
}