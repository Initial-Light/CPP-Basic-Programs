#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

//Structure for Scoccer Players (FB for football)
struct FBPlayer
{
	string name;
	int number;
	int score;
};

//Function Prototypes
void getPlayer(FBPlayer[], const int);
void showPlayer(const FBPlayer[], const int);

int main()
{
	const int SIZE = 12;
	FBPlayer players[SIZE]; //Arrays of Structure
	int total = 0;

	getPlayer(players, SIZE);
	showPlayer(players, SIZE);

	int temp = players[0].score; //A Variable to store the largest score
	int maxPointsPlayerIndex = 0;

	for (int i = 0; i < SIZE; i++)
	{
		//Accumulate the total scores
		total += players[i].score;

		//Finding the largest score
		while (temp < players[i].score)
		{
			temp = players[i].score;
			maxPointsPlayerIndex = i;
		}
	}

	cout << "Total Points: " << total <<endl;
	cout << "The player who scored the most points is: " << players[maxPointsPlayerIndex].name << endl << endl;
}

//Getting the data from user inputs
void getPlayer(FBPlayer player[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "PLAYER #" << i + 1 << endl;
		cout << "---------" << endl;
		cout << "Player's name: ";
		cin >> player[i].name;
		cout << "Player's number: ";
		cin >> player[i].number;
		while (player[i].number < 0) //Input validation
		{
			cout << "Negative number is not allowed. Please try again: ";
			cin >> player[i].number;
		}
		cout << "Player's scores: ";
		cin >> player[i].score;
		while (player[i].score < 0) //Input validation
		{
			cout << "Negative number is not allowed. Please try again: ";
			cin >> player[i].score;
		}
		cout << endl;
	}
}

//Show the data of the players
void showPlayer(const FBPlayer player[], const int size)
{
	cout << "NAME\t\t\tNUMBER\t\t\tPOINTS SCORED";
	for (int i = 0; i < size; i++)
	{
		cout << endl;
		cout << player[i].name << "\t\t\t";
		cout << player[i].number << "\t\t\t";
		cout << player[i].score << endl;
	}
	cout << endl;
}


