// Mark Cubi
// Mar. 28, 2023
// C++ code to declare Name Class

#include<string>
#ifndef NAME_H
#define NAME_H
class Name // class that stores the first and last name of individuals
{	
	public:	
		Name();
		Name(std::string nameToSet); 
		std::string getFirstName();  // getter functions for private data members
		std::string getLastName();
		std::string getFullName();
		void printName();
	private:
		std::string fName;
		std::string lName;
		std::string fullName;
		void blankRemover(); // private member function to remove trailing whitespace
};				     // called only by a constructor that has string passed through
#endif

