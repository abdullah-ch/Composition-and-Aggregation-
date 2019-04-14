#include <iostream>
#include "point.h"
using namespace std;
class circle
{
	point centre;
	float radius;

public:
	circle();
	~circle();
	circle(int x3, int y3, float r);
	float getradius();
	void print();
};