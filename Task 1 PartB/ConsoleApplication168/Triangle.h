
#include "Point.h"
#include "Style.h"
#include "Circle.h"
#pragma once


class Triangle
{
	point Points_1;
	point Points_2;
	point Points_3;
	style*str;

public:
	Triangle();
	Triangle(int W, int E, int R, int K, int B, int X);
	~Triangle();
	void setcolo(string colo);
	void setisfilled(bool x);
	void setstyle(style *k);

	void Display_Summary();
};