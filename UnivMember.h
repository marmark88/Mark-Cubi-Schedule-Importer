// Mark Cubi
// April 11, 2023
// C++ code to create class that stores info about university members

#include <string>
#include "Name.h"
#include "ID.h"
#ifndef UNIVMEMBER_H
#define UNIVMEMBER_H
// class to store information on different roles/names/ids of people at a University
class UnivMember
{
	public:
		UnivMember();
		UnivMember(std::string fullName); // constructor that takes name of univMember
		~UnivMember();	
		Name GetUnivName(); // basic getter functions
		ID GetUnivID();
		void printUnivMembers();
	protected:
		ID UnivID; // uses both Name and ID class
		Name UnivName;
};

#endif
