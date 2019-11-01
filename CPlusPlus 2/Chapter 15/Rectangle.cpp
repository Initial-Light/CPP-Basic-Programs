#include "pch.h"
#include "Rectangle.h"


Rectangle::Rectangle(long int w, long int l)
{
	width = w;
	length = l;
}

long int Rectangle::getWidth() const
{
	return width;
}

long int Rectangle::getLength() const
{
	return length;
}

void Rectangle::calcArea()
{
	area = length * width;
}