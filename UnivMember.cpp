// Mark Cubi
// April 17, 2023
// C++ code to impliment UnivMember functions


#include "UnivMember.h"
#include "Name.h"
#include "ID.h"
#include <string>
#include <iostream>

using namespace std;


UnivMember::UnivMember() // default constructor that initializes UnivName and Role to Nothing 
{
	UnivName = Name("Defined, Not");
}

UnivMember::~UnivMember()
{}

UnivMember::UnivMember(string fullName) // constructor that sets Role,UnivName if given
{
	UnivName = Name(fullName);	
}


Name UnivMember::GetUnivName()
{
	return UnivName;
}

ID UnivMember::GetUnivID()
{
	return UnivID;
}
void UnivMember::printUnivMembers() // member function that prints contents of Role, ID, and Univ Name 
{
	UnivName.printName();
	cout << "ID: " << UnivID.getID() << endl;
	cout << endl;
}
