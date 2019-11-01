#pragma once
#include "BasicShape.h"
class Rectangle : public BasicShape
{
private:
	long int width;
	long int length;

public:
	//Constructor
	Rectangle(long int, long int);
	//return width
	long int getWidth() const;
	//return length
	long int getLength() const;
	//Overriding calcArea from base class BasicShape
	virtual void calcArea();
};

