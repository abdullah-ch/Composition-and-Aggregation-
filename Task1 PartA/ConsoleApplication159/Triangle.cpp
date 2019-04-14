// ConsoleApplication162.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#include "Triangle.h"

Triangle::Triangle()
{
	cout << "The constructer of the Triangle has been called" << endl;
}

Triangle::Triangle(int W, int E, int R, int K, int B, int X) : Points_1(W, E), Points_2(R, K),Points_3(B, X)
{

}

void Triangle::Display_Summary()
{
	cout << "Here is the 1st point of the triangle ";
	Points_1.print();
	cout << "Here is the 2nd point of the triangle ";
	Points_2.print();
	cout << "Here is the 3rd point of the triangle ";
	Points_3.print() ;
	
}

Triangle::~Triangle()
{
	cout << "Destructer has been called" << endl;
}
