#include "roster.h"
#include <iostream>
using namespace std;

int main()
{
  cout << "WGU C867: Scripting and Programming Applications\n" << "Written in C++\n" << "Student ID: 001418359\n" << "Sergio Pada\n\n\n";

  Roster roster;
	
  for (int i = 0; i < 5; i++) roster.parse(studentData[i]);
  roster.printAll();

	for (int i = 0; i < 1; i++){
    roster.printAvgDays(roster.classRosterArray[i]->getStudentID());
  }
	
  roster.printInvalidEmails();
    
  for (int i = 0; i < 3; i++){
    cout << "STUDENTS IN " << degreeString[i] <<" PROGRAM" << endl;
      roster.printByDegree((Degree)i);
  }
    

  roster.remove("A3");

  
  roster.remove("A3");

  return 0;
}