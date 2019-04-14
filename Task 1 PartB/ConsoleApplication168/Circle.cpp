
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
	
	str = NULL;
	cout << "Circle default constructor has been called on the screen. " << endl;
}

void circle::setstyle(style* K)
{
	str = K;
}

void circle::setcolo(string colo)
{
	str->setcolor(colo);
}
void circle::setisfilled(bool x)
{
	str->setisfilled(x);
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
	cout << "Color of the circle is and isfilled:" << endl;
	str->Print();
}
circle::~circle()
{
	cout << "~Circle destructor has been called on the screen. " << endl;
}




