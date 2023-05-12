// Mark Cubi
// May 12, 2023
// C++ code to impliment the Student derived class

#include "Student.h"
#include <iostream>
#include <sstream>
#include <string>
#include "Name.h"
#include <cctype>

using namespace std;

Student::Student() // sets all CRNS to 999999 by default
{
	for(int i = 0; i < 5; i++)
	{
		courseCRN[i] = 999999;
	}
}

Student::~Student()
{}

int* Student::getCRN()
{
	return courseCRN;
}

ostream& operator<<(ostream& out, Student currentStudent) // overloads << operator to output the students name and all their courses
{
	Name studentsName = currentStudent.GetUnivName(); // had an issue accessing Name just using the Student class, had to create my own Name object
	int* courses = currentStudent.getCRN();
	out << "Here are" << studentsName.getFullName() << "'s courses " << endl;
	for(int i = 0; i < 5; i++)
	{	
		out << courses[i] << endl;
	}
	return out;
}

