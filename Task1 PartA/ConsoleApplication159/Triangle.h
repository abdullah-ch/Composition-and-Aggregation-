
#include "Point.h"

class Triangle
{
	point Points_1;
	point Points_2;
	point Points_3;

public:
	Triangle();
	Triangle(int W, int E, int R, int K, int B, int X);
	~Triangle();
	void Display();
};