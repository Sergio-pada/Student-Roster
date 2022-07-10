#pragma once
#include "student.h"

const string studentData[5] = {
  "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
  "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
  "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
  "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
  "A5,Sergio,Pada,spada@wgu.edu,26,50,40,40,SOFTWARE"
};

class Roster{
private:
	int lastIndex = -1;

public:
  Student *classRosterArray[5];
  
	void parse(string row);
  
	void add(string studentID, string firstName, string lastName, string emailAddress, int age, int numDays1, int numDays2, int numDays3, Degree degree);
	
	void printAll();
  
	void printInvalidEmails();

	void printAvgDays(string studentID);
  
	void printByDegree(Degree degree);
  
  void remove(string studentID);
};