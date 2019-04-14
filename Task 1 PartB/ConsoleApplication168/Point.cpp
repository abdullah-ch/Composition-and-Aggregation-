// ConsoleApplication158.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>
using namespace std;
#include "Point.h"

point::point()
{
	cout << "Point has been initialized.brooo" << endl;
}

point::point(int x1, int y1)
{
	x = x1;
	y = y1;
}
int point::getx()
{
	return x;
}
int point::gety()
{
	return y;
}
void point::print()
{
	cout << "(" << getx() << "," << gety() << ")" << endl;
}

point::~point()
{
	cout << "~Point destructor has been initialized ." << endl;
}