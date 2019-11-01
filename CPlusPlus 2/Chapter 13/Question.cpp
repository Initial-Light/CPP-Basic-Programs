#include "pch.h"
#include "Question.h"

//Constructor
Question::Question()
{

}

//Mutators
void Question::setTriviaQuestion(string q)
{
	triviaQuestion = q;
}

void Question::setAnswer1(string a1)
{
	answer1 = a1;
}

void Question::setAnswer2(string a2)
{
	answer2 = a2;
}

void Question::setAnswer3(string a3)
{
	answer3 = a3;
}

void Question::setAnswer4(string a4)
{
	answer4 = a4;
}
void Question::setCorrectAnswer(int c)
{
	corretAnswer = c;
}
//Accessors
string Question::getTriviaQuestion() const
{
	return triviaQuestion;
}

string Question::getAnswer1() const
{
	return answer1;
}

string Question::getAnswer2() const
{
	return answer2;
}

string Question::getAnswer3() const
{
	return answer3;
}

string Question::getAnswer4() const
{
	return answer4;
}

int Question::getCorrectAnswer() const
{
	return corretAnswer;
}


