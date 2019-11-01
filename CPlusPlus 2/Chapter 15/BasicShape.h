#pragma once
class BasicShape
{
protected:
	double area;

public:
	//Constructor
	BasicShape();
	//return area
	double getArea() const;
	//set area to a value from parameter
	void setArea(double);
	//Pure Virtual Function
	virtual void calcArea() = 0;
};

