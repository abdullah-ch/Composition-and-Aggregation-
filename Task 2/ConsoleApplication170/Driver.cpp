// ConsoleApplication170.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//#include "CompactDisc.h"
#include "CD_Drive.h"

int main()
{
	/*CompactDisc C;
	C.Name_CompactDisk("Shawn Mendezz");
	C.Size_Capacity_Compact_Disk(750);
	C.Print_Summary();*/

	
	CompactDisc CD1;
	CompactDisc CD2;
	CD_Drive  theCD_Drive;
//	theCD_Drive.Insertion_CD(CD1);
	//theCD_Drive.Play();
	//theCD_Drive.Eject_CD();
	CD2.Name_CompactDisk("Cherry Cherry Lady");
	CD2.Size_Capacity_Compact_Disk(123);
	theCD_Drive.Insertion_CD(CD2);
	theCD_Drive.Play(CD2);
	



}


