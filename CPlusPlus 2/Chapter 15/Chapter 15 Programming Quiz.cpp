#include "pch.h"
#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
using namespace std;
int main()
{
	long int X;
	long int Y;
	double radius;
	cout << "Please enter the x coordinate of the circle's center: ";
	cin >> X;
	cout << "Please enter the y coordinate of the circle's center: ";
	cin >> Y;
	cout << "Please enter the radius of the circle: ";
	cin >> radius;

	Circle circle(X, Y, radius);

	cout << "The area of the circle is " << circle.getArea() << endl;

	long int length;
	long int width;

	cout << endl << "Please enter the length of the rectangle: ";
	cin >> length;
	cout << "Please enter the width of the rectangle: ";
	cin >> width;
	Rectangle rectangle(width, length);
	cout << "The area of the rectangle is " << rectangle.getArea() << endl;
}


