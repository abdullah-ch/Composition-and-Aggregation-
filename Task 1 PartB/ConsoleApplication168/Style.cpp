// ConsoleApplication164.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;
#include "Style.h"


style::style()
{
	cout << "style comstructor has been called" << endl;
}

style::style(string col, bool Is_filled)
{
	color = col;
	Isfilled = Is_filled;
}
void style::setcolor(string colo)
{
	color = colo;
}
void style::setisfilled(bool yo)
{
	Isfilled = yo;
}
style::~style()
{
	cout << "Style destructer has been called " << endl;
}

string style::Get_color()
{
	return color;
}

bool style::Get_IsFilled()
{
	return Isfilled;
}

void style::Print()
{
	cout << "The color of the desired style is " << Get_color() << endl;
	cout << " It has been filled " << Get_IsFilled() << endl;
}






