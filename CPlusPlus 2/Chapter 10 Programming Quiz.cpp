#include "pch.h"
#include <iostream>
#include <cstring>
using namespace std;

//Function Prototypes
int countVowels(const char*); //Function to count vowels
int countConsonants(const char*); //Function to count consonants

int main()
{
	const int SIZE = 100;
	char choice;
	char* iptr = new char[SIZE]; //Dynamic Array
	cout << "Enter a string: ";
	cin.getline(iptr, SIZE);
	
	do
	{
		//Menu
		cout << "\tA) Count the vowels in the string" << endl;
		cout << "\tB) Count the consonants in the string" << endl;
		cout << "\tC) Count both vowels and consonants" << endl;
		cout << "\tD) Enter another string" << endl;
		cout << "\tE) Exit this program" << endl;

		cin >> choice;
		choice = toupper(choice);

		//Switch statement for various conditions
		switch (choice)
		{
		case 'A': cout << "The string has " << countVowels(iptr) << " vowels." << endl;
			break;
		case 'B': cout << "The string has " << countConsonants(iptr) << " consonants." << endl;
			break;
		case 'C': cout << "The string has " << countVowels(iptr) << " vowels and " << countConsonants(iptr) << " consonants." << endl;
			break;
		case 'D': cout << "Enter another string: ";
			cin.ignore(); //Skipping the null character in the keyboard buffer left by cin
			cin.getline(iptr, SIZE);
			break;
		case 'E': break;
		}//End Switch
	} while (choice != 'E'); //End while

	delete[] iptr; //Free the memory
}

int countVowels(const char* cstring)
{
	int count = 0;

	for (int i = 0; i < strlen(cstring); i++)
	{
		if (toupper(cstring[i]) == 'A' || toupper(cstring[i]) == 'E' || toupper(cstring[i]) == 'I' || toupper(cstring[i]) == 'O' || toupper(cstring[i]) == 'U')
			count++;
	}
	return count;
}

int countConsonants(const char* cstring)
{
	int count = 0;

	for (int i = 0; i < strlen(cstring); i++)
	{
		if (isalpha(cstring[i]))
			count++;
	}

	return count - countVowels(cstring); //Alphabets - Vowels
}

