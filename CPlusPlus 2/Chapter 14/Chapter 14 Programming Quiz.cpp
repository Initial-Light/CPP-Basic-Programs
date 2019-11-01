// Chapter 14, Programming Challenge 9: FeetInches Modification
#include "pch.h"
#include <iostream>
#include "FeetInches.h"
using namespace std;

int main()
{
	// Create three FeetInches objects.
	FeetInches one, two, three;

	// Get a distance for the first object.
	cout << "Enter a distance in feet and inches: ";
	cin >> one;

	// Get a distance for the second object.
	cout << "Enter another distance in feet and inches: ";
	cin >> two;

	// The sum is
	//cout << "The sum is: " << one + two << endl;

	// The difference is
	//cout << "The difference of one - two is: " << one - two << endl;

	// The difference is
	//cout << "The difference of two - one is: " << two - one << endl;

	//Overloaded prefix ++ operator.
	//++one;
	//cout << "Overloaded prefix ++ operator (++one): " << one << endl;

	//Overloaded postfix ++ operator.
	//two++;
	//cout << "Overloaded postfix ++ operator (two++): " << two << endl;

	//less than comparison
	//cout << (one<two)?"one < two" << "one < two":"two < one"  << endl;
	//if (one < two)
		//cout << "one < two" << endl;
	//else
		//cout << "two < one" << endl;

	//greater than comparison
	//if (one > two)
		//cout << "one > two" << endl;
	//else
		//cout << "two > one" << endl;

	//Not equal to operator
	if (one != two)
		cout << "The two are not equal.\n";

	//Greater than or equal to operator
	if (one >= two)
	    cout << one << " is >= " << two << endl;

	//Less than or equal to operator
    if (one <= two)
	    cout << one << " is <= " << two << endl;


	system("pause");
	return 0;
}

