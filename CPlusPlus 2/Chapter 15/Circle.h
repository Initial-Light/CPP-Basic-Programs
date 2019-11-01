#pragma once
#include "BasicShape.h"
class Circle : public BasicShape
{
private:
	long int centerX;
	long int centerY;
	double radius;

public:
	//Constructor
	Circle(long int, long int, double);
	//return centerX
	long int getCenterX() const;
	//return centerY
	long int getCenterY() const;
	//radius = r;
	void setRadius(double);
	//Overriding calcArea from base class BasicShape
	virtual void calcArea();
	
};

