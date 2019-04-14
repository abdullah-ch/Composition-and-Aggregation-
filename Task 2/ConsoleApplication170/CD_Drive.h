#include <iostream>
#include <cstring>
#include "CompactDisc.h"
using namespace std;

class CD_Drive
{
private:
	string Name_of_MANUFACTURER;
	int Speed_READ_WRITE_HEADS;
	CompactDisc* aCompactDisk = new CompactDisc;
	

public:

	CD_Drive();
	CD_Drive(string Name, int Speed_read_write);
	
	string GET_Manufacturer_Name();
	int GET_Speed_read_write();
	void Print_Summary();
	~CD_Drive();
	void Insertion_CD(CompactDisc &A);
	//void Play(string Title, int Size);
	void Play(CompactDisc A);
	void Play();
	CompactDisc* Eject_CD();

};