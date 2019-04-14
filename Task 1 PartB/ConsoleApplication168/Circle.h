#include <iostream>
#include "point.h"
#include "Style.h"
#pragma once
using namespace std;
class circle
{
private:
	point centre;
	float radius;
	style *str;

public:
	circle();
	~circle();
	circle(int x3, int y3, float r);
	float getradius();
	void setcolo(string colo);
	void setisfilled(bool x);
	void setstyle(style *k);
	void print();
};