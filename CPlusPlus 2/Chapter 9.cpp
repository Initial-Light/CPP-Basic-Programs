#include <iostream>
#include <iomanip>
using namespace std;
//AC

//Functions Prototype
void Sorting(double[], int);
double CalcAverage(double[], int);

int main()
{
	//Variable Declaration
	int numOfScores = 0;
	double* iptr = nullptr;

	//User Input and Input Validation
	cout << "How many test scores will you enter? ";
	cin >> numOfScores;
	while (numOfScores < 0)
	{
		cout << "The number cannot be negative." << endl << "Enter another number: ";
		cin >> numOfScores;
	}

	iptr = new double[numOfScores]; //Dynamically Allocated Array

	//Looping through test scores
	for (int count = 0; count < numOfScores; count++)
	{
		cout << "Enter test score " << count + 1 << ": ";
		cin >> *(iptr + count);
		//Input Validation
		while (*(iptr + count) < 0)
		{
			cout << "Negative score is not allowed.\n" << "Enter score for this test agian: ";
			cin >> *(iptr + count);
		}
	}

	//Calling the Sorting function and display the test scores in ascending order
	Sorting(iptr, numOfScores);
	cout << "\n\nThe test scores in ascending order, and their average, are: \n\n";
	cout << " Score" << endl << " -----" << endl << endl;
	cout << fixed << setprecision(2);
	for (int count = 0; count < numOfScores; count++)
	{
		cout << *(iptr + count) << endl;
	}

	//Calling the CalcAverage function and displaying it
	double average = CalcAverage(iptr, numOfScores);
	cout << endl << "Average score: " << average;

	cout << endl;
	system("pause");
	return 0;
}

void Sorting(double array[], int SIZE)
{
	//Bubble Sort algorithm
	bool swap;
	double temp = 0.0;

	do
	{
		swap = false;
		for (int count = 0; count < (SIZE - 1); count++)
		{
			if (array[count] > array[count + 1])
			{
				temp = array[count];
				array[count] = array[count + 1];
				array[count + 1] = temp;
				swap = true;
			}
		}
	} while (swap);
}

//Calculate the average
double CalcAverage(double array[], int SIZE)
{
	double total = 0.0;
	int count = 0;
	for (count; count < SIZE; count++)
	{
		total += array[count];
	}
	double avg = total / count;
	return avg;
}