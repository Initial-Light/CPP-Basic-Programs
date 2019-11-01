#pragma once
#include <string>
using namespace std;

class Question
{
public:
	//Constructor
	Question();
	//Mutators
	void setTriviaQuestion(string q);
	void setAnswer1(string a1);
	void setAnswer2(string a2);
	void setAnswer3(string a3);
	void setAnswer4(string a4);
	void setCorrectAnswer(int c);
	//Accessors
	string getTriviaQuestion() const;
	string getAnswer1() const;
	string getAnswer2() const;
	string getAnswer3() const;
	string getAnswer4() const;
	int getCorrectAnswer() const;
	
private:
	string triviaQuestion;
	string answer1;
	string answer2;
	string answer3;
	string answer4;
	string answer5;
	int corretAnswer;
};

