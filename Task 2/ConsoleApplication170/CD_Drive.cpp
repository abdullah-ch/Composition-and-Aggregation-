// ConsoleApplication171.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;
#include <string>
#include "CD_Drive.h"

CD_Drive::CD_Drive()
{
	cout << "CD_DRIVEEE constructer has been called " << endl;
}


CD_Drive::CD_Drive(string Name, int Speed_read_write)
{
	cout << "CD_Drive Parametric constructer has been initialized" << endl;

	this->Name_of_MANUFACTURER = Name;
	this->Speed_READ_WRITE_HEADS = Speed_read_write;
	aCompactDisk = NULL;
}


string CD_Drive::GET_Manufacturer_Name()
{
	return Name_of_MANUFACTURER;
}

int CD_Drive::GET_Speed_read_write()
{
	return Speed_READ_WRITE_HEADS;
}

void CD_Drive::Print_Summary()
{
	cout << "The name of the manufacturer is "<< GET_Manufacturer_Name() << endl;
	cout << "The speed of read and write heads is " << GET_Speed_read_write() << endl;
}

CD_Drive::~CD_Drive()
{
	cout << "The CD_Drive destructer has been called " << endl;
}



void CD_Drive::Insertion_CD(CompactDisc &A)
{
	aCompactDisk = &A;
}

//void CD_Drive::Play(string Title, int Size)
//{
//	
//	aCompactDisk->Name_CompactDisk(Title);
//	aCompactDisk->Size_Capacity_Compact_Disk(Size);
//	aCompactDisk->Print_Summary();
//}

void CD_Drive::Play(CompactDisc A)
{
	A.Print_Summary();
}
void CD_Drive::Play()
{
	cout << "Please Insert a CD" << endl;
}

CompactDisc* CD_Drive::Eject_CD()
{
	return aCompactDisk;
}







