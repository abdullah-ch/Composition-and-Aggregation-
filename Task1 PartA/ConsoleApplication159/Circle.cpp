
#include "stdafx.h"
#include <iostream>
#include "Circle.h"
using namespace std;

circle::circle(int x3, int y3, float r) : centre(x3, y3)
{
	
	radius = r;
}
circle::circle()
{
	cout << "Circle default constructor has been called on the screen. " << endl;
}
float circle::getradius()
{
	return radius;
}
void circle::print()
{
	cout << "Cente's Coordinate " << endl;
	centre.print();
	cout << "Radius is: " << endl;
	cout << getradius() << endl;
}
circle::~circle()
{
	cout << "~Circle destructor has been called on the screen. " << endl;
}




