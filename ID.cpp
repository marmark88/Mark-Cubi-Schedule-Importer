// Mark Cubi
// April 4, 2023
// C++ code to impliment the ID class

#include <string>
#include "ID.h"
using namespace std;

ID::ID() 
{
	string convertedIDNum;
	static int currentNumber = 10000000; // sets first object to 1000000, then incriments each 
					     // subsequent one by +1		    
	IDNum = currentNumber;
	currentNumber++;

	convertedIDNum = to_string(IDNum); // converts the IDNum to a string so that it can be appended
	fullID = "A" + convertedIDNum;
}

string ID::getID()
{
	return fullID; // returns the ID with the 'A' at the front
}

