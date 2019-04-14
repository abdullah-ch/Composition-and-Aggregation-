#include <iostream>
#include <cstring>
 using namespace std;

class CompactDisc
{
private:

	string Compact_Disc_Name;
	int Capacity_Compact_Disc;


public:

	CompactDisc();
	void Name_CompactDisk(string name);
	void Size_Capacity_Compact_Disk(int Capacity);
	string GET_NAME();
	int GET_CAPACITY();
		~CompactDisc();
	void Print_Summary();


};