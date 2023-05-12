// Mark Cubi
// April 4, 2023
// C++ code to create ID class

#include <string>
#ifndef ID_H
#define ID_H
// class to store the ID number of Fordham students
class ID
{
	public:
		ID();
		std::string getID();
	private:
		std::string fullID; // ID with the 'A' in front of it
		int IDNum; //stores just number ID
};

#endif
