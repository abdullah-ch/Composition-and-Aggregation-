// ConsoleApplication168.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Triangle.h"
#include "Circle.h"
#pragma once
int main()
{
	//style*style1 = new style;
	//circle c;
	//c.setstyle(style1);
	//c.setcolo("Blue");
	//c.setisfilled(true);
	//c.print();

	/*style*style1 = new style;
	Triangle Quaid;
	Quaid.setstyle(style1);
	Quaid.setisfilled(true);
	Quaid.setcolo("Red");
	Quaid.Display_Summary();  */


	/*circle circle1;
	circle1.setstyle(style1);
	circle1.setcolo("Blue");
	circle1.setisfilled(true);
	*//*Triangle triange1;
	triange1.setstyle(style1);
	Triangle(1, 2, 3, 4, 5, 6);
	triange1.Display_Summary();
  */
 

	/*style*style1 = new style;
	circle circle1;
	circle1.setstyle(style1);
	circle1.setcolo("Purple");
	circle1.setisfilled(false);
	circle1.print();
*/
	style*style1 = new style;
	circle circle1;
	circle1.setstyle(style1);
	circle1.setcolo("Purple");
	circle1.setisfilled(true);
	circle1.print();

	Triangle T;
	T.setstyle(style1);
	T.Display_Summary();
}