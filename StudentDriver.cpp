// Mark Cubi
// May 12, 2023
// Code to impliment student driver

#include "Student.h"
#include "Name.h"
#include "ID.h"
#include "UnivMember.h"
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
	ifstream inFile;
	string fileInput, firstName, lastName;
	vector<Student*> studentPtrVector;
	inFile.open("StudentsWithCRNs.txt"); // accesses Student file
	
	if(!inFile.is_open())
	{
		cout << "Infile has failed to open!" << endl;
		return -1;
	}	

	while(getline(inFile, fileInput)) // reads each line from file and stores it into a studentPtr
	{
		Student* studentPtr = new Student;
		*studentPtr >> fileInput; // >> overloading is used to parse and store line input
		studentPtrVector.push_back(studentPtr); // ptr is added to an array of Student ptrs
	}
	inFile.close();
	
	for(int i = 0; i < studentPtrVector.size(); i++)
	{
			cout << *studentPtrVector[i]; // outputs the contents of each ptr using << overloading 
	}

	return 0;
}
