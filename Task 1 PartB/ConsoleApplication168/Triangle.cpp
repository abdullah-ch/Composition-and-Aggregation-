// ConsoleApplication162.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#include "Triangle.h"

Triangle::Triangle()
{
	cout << "The constructer of the Triangle has been called" << endl;
	str = NULL;
}

Triangle::Triangle(int W, int E, int R, int K, int B, int X) : Points_1(W, E), Points_2(R, K),Points_3(B, X)
{

}

void Triangle::setstyle(style* K)
{
	str = K;
}

void Triangle::setcolo(string colo)
{
	str->setcolor(colo);
}
void Triangle::setisfilled(bool x)
{
	str->setisfilled(x);
}


	void Triangle::Display_Summary()
	{
		cout << "Here is the 1st point of the triangle ";
		Points_1.print();
		cout << "Here is the 2nd point of the triangle ";
		Points_2.print();
		cout << "Here is the 3rd point of the triangle ";
		Points_3.print();
		cout << "HEre's everything about the triangle , whether it is filled or not" << endl;
		str->Print();


	}

Triangle::~Triangle()
{
	cout << "Destructer has been called" << endl;
}
