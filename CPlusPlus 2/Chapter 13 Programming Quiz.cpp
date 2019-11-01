#include "pch.h"
#include <iostream>
#include "Question.h"
#include <fstream>
using namespace std;

//Function prototype
void showQuestion(Question[], int);

int main()
{
	//Array of objects
	Question trivia[10];
	//Necessary variables
	int playerOneChoice = 0;
	int playerTwoChoice = 0;
	int playerOnePoint = 0;
	int playerTwoPoint = 0;
	int count = 0;
	ifstream input;
	string line;
	input.open("trivia.txt");
	//File opening and checking
	if (!input)
		cout << "Error opening file";
	else
	{
		//Reading lines from the file
		for (int i = 0; i < 10; i++)
		{
			//Reading line by line and storing in the respective objects
			getline(input, line, '\n');
			trivia[i].setTriviaQuestion(line);
			getline(input, line, '\n');
			trivia[i].setAnswer1(line);
			getline(input, line, '\n');
			trivia[i].setAnswer2(line);
			getline(input, line, '\n');
			trivia[i].setAnswer3(line);
			getline(input, line, '\n');
			trivia[i].setAnswer4(line);
			getline(input, line, '\n');
			trivia[i].setCorrectAnswer(stoi(line));
		}		
	}
	for (count; count < 10; count++)
	{
		//For Player 1
		if (count % 2 == 0)
		{
			cout << "Question for PLAYER 1: " << endl;
			showQuestion(trivia, count);
			cin >> playerOneChoice;
			if (playerOneChoice == trivia[count].getCorrectAnswer())
			{
				playerOnePoint++; //Points added
				cout << "Correct!" << endl << endl;
			}
			else
			{
				cout << "Sorry that's incorrect. The correct is (" << trivia[count].getCorrectAnswer() << ")." << endl << endl;
			}
		}
		//For Player 2
		else
		{
			cout << "Question for PLAYER 2: " << endl;
			showQuestion(trivia, count);
			cin >> playerTwoChoice;
			if (playerTwoChoice == trivia[count].getCorrectAnswer())
			{
				playerTwoPoint++; //Points added
				cout << "Correct!" << endl << endl;
			}
			else
			{
				cout << "Sorry that's incorrect. The correct is (" << trivia[count].getCorrectAnswer() << ")." << endl << endl;
			}
		}
	}

	cout << "Game Over. Here are the points: " << endl;
	cout << "PLAYER 1: " << playerOnePoint << endl;
	cout << "Player 2: " << playerTwoPoint << endl;
	cout << endl;

	//Result decision making
	if (playerOnePoint > playerTwoPoint)
	{
		cout << "Player One Wins" << endl;
	}
	else if (playerTwoPoint > playerOnePoint)
	{
		cout << "Player Two Wins" << endl;
	}
	else if (playerOnePoint == playerTwoPoint)
	{
		cout << "Player One and Two Tie!" << endl;
	}


	return 0;
}

//Function to show the Questions in the console
void showQuestion(Question q[], int i)
{
	cout << q[i].getTriviaQuestion() << endl;
	cout << "1. " << q[i].getAnswer1() << endl;
	cout << "2. " << q[i].getAnswer2() << endl;
	cout << "3. " << q[i].getAnswer3() << endl;
	cout << "4. " << q[i].getAnswer4() << endl;
	cout << "Enter the correct answer: ";
}