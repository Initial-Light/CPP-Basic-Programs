#include "pch.h"
#include <iostream>
using namespace std;

template <class T>
T Total(T arr[], int count, T total)
{

	for (int i = 0; i < count; i++)
	{
		cout << "Enter a value: ";
		cin >> arr[i];
		total += arr[i];
	}
	return total;
}

int main()
{
	int iCount = 0;
	int dCount = 0;
	int* iArray = nullptr;
	double* dArray = nullptr;

	cout << "How many integer values do you wish to total? ";
	cin >> iCount;
	iArray = new int[iCount];
	cout << "The total is " << Total(iArray, iCount, 0) << "\n\n";

	cout << "How many integer values do you wish to total? ";
	cin >> dCount;
	dArray = new double[dCount];
	cout << "The total is " << Total(dArray, dCount, 0.0);
}
