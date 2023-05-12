// Mark Cubi
// May, 12, 2023
// C++ code to create Student class Derived from University Member

#include <string>
#include "UnivMember.h"
#include <sstream>
#include <iostream>
#include <cctype>
#ifndef STUDENT_H
#define STUDENT_H

using namespace std;
// class to store information regarding students
class Student: public UnivMember // inherets from UnivMember
{
	public:
		Student(); // basic constructor destructor
		~Student();
		Student& operator>>(string studentInfo) // overloads >> operator to parse a line input into a name and 5 course CRNs
		{					// function was defined in .h because I got error in .cpp, wasn't sure how to fix it
			int posOfDigit = 0;	
			int crn;
			string remainingInfo, crnToConvert;
			istringstream inSS;

			for(int i = 0; i < studentInfo.length(); i++) // searches for first number in line and takes that position onward as the string
			{
				if(isdigit(studentInfo.at(i)))
				{
					posOfDigit = i;
					remainingInfo = studentInfo.substr(posOfDigit);					
					break;	
				}
			}
		
			string name = studentInfo.substr(0, posOfDigit); // sets name to whatever was before the first num
			
			inSS.str(remainingInfo);
			UnivName = Name(name);
			
			for(int i = 0; i < 5; i++)
			{
				inSS >> crnToConvert; // uses string stream to parse remaining 5 CRNs
				crn = stoi(crnToConvert);
				courseCRN[i] = crn;
			}
			return *this;	
		}
		friend ostream& operator<<(ostream& out, Student currentStudent); // declares << operator overloading
		int* getCRN(); // basic getter function

	private:
		int courseCRN[5];
};

#endif
