// ConsoleApplication169.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "CompactDisc.h"
using namespace std;


CompactDisc::CompactDisc()
{
	cout << "CompactDisc constructer has been called" << endl;

}

void  CompactDisc::Size_Capacity_Compact_Disk(int Capacity)
{
	this->Capacity_Compact_Disc = Capacity;
}


void CompactDisc::Name_CompactDisk(string name)
{
	this->Compact_Disc_Name = name;
}

string CompactDisc::GET_NAME()
{
	return Compact_Disc_Name;
}

int CompactDisc::GET_CAPACITY()
{
	return Capacity_Compact_Disc;
}


void CompactDisc::Print_Summary()
{
	cout << "Here's the name of the compact Disk ,, bro" << GET_NAME() << endl;
	cout << "Here's the capacity of the compact disk " << GET_CAPACITY << endl;
}


CompactDisc::~CompactDisc()
{
	cout << "Compact Disk Destructer has beeen called" << endl;
}









