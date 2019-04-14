#include <iostream>
using namespace std;

class point
{
	int x;
	int y;


public:
	point(int x1, int y1);
	point();
	~point();
	int getx();
	int gety();
	void print();

};