#include "pch.h"
#include "Circle.h"

Circle::Circle(long int x, long int y, double r)
{
	centerX = x;
	centerY = y;
	radius = r;
}

long int Circle::getCenterX() const
{
	return centerX;
}
long int Circle::getCenterY() const
{
	return centerY;
}

void Circle::setRadius(double r)
{
	radius = r;
}

void Circle::calcArea()
{
	area = 3.14159 * radius * radius;
}
