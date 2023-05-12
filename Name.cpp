//Mark Cubi
//Mar. 28, 2023
//C++ code to impliment Name Class

#include <iostream>
#include "Name.h"
#include <string>
#include <cctype>
using namespace std;
// constructor sets first name and last name to "First" and "Last" if not specified by user
Name::Name()
{
	fName = "First";
	lName = "Last";
	fullName = fName + lName;
}

void Name::blankRemover()
{
	int lastChar = fName.size() - 1; // sets last char to last index in string in case no whitespace
	for(int i = fName.size() - 1; i > 0; i--)
	{
		if(isalpha(fName.at(i)) || ispunct(fName.at(i)))
		{	lastChar = i; // finds the last instance of a non-whitespace char
			break;
		}
	}
	fName = fName.substr(0, lastChar + 1); // takes substring from start to last char
}					       // effectively removing trailing whitespace

Name::Name(string nameToSet) // sets name if one is specified in object declaration
{
	int commaIndex;
	commaIndex = nameToSet.find(",");
	lName = nameToSet.substr(0, commaIndex); // parses a full name to split it into last and first
	fName = nameToSet.substr(commaIndex + 1);
	blankRemover(); // calls private helper function to remove trailing whitespace
	fullName = fName + lName;
}
// returns first name
string Name::getFirstName()
{
	return fName;
}
// returns last name
string Name::getLastName()
{
	return lName;
}

string Name::getFullName()
{
	return fullName;
}

// prints the first and last name contents
void Name::printName()
{
	cout << fName << " " << lName << endl;
}

