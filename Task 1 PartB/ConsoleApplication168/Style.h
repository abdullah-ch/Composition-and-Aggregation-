#include <iostream>
#include <string>
using namespace std;
#pragma once


class style
{
private:

	string color;
	bool Isfilled;

public:

	style();
	~style();
	style(string col, bool Is_Filled);
	void setcolor(string colo);
	void setisfilled(bool yo);
	string Get_color();
	bool Get_IsFilled();
	void Print();

};