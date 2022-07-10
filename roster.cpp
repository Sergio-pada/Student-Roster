#include "roster.h"
using namespace std;
void Roster::parse(string studentdata)
#include <iostream>
{    
  int rhs = studentdata.find(",");
  string studentID = studentdata.substr(0, rhs);
    
  int lhs = rhs + 1;
  rhs = studentdata.find(",", lhs);
  string firstName = studentdata.substr(lhs, rhs - lhs);
  lhs = rhs + 1;
  rhs = studentdata.find(",", lhs);
  string lastName = studentdata.substr(lhs, rhs - lhs);
  lhs = rhs + 1;
  rhs = studentdata.find(",", lhs);
	string emailAddress = studentdata.substr(lhs, rhs - lhs);
  lhs = rhs + 1;
  rhs = studentdata.find(",", lhs);
  int age = stoi(studentdata.substr(lhs, rhs - lhs));
  lhs = rhs + 1;
  rhs = studentdata.find(",", lhs);
  int numDays1 = stoi(studentdata.substr(lhs, rhs - lhs));
  lhs = rhs + 1;
  rhs = studentdata.find(",", lhs);
  int numDays2 = stoi(studentdata.substr(lhs, rhs - lhs));
  lhs = rhs + 1;
  rhs = studentdata.find(",", lhs);
  int numDays3 = stoi(studentdata.substr(lhs, rhs - lhs));
  lhs = rhs + 1;
  rhs = studentdata.find(",", lhs);
  string degree = studentdata.substr(lhs, rhs - lhs);
	
  Degree deg = SECURITY;
  if (degree == "NETWORK") {
     deg = NETWORK;
  }
  if (degree == "SOFTWARE") {
      deg = SOFTWARE;
  }
    
  add(studentID, firstName, lastName, emailAddress, age, numDays1, numDays2, numDays3, deg);
}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int  age, int numDays1, int numDays2, int numDays3, Degree degree)
{
  int parr[3] = {
  	numDays1, numDays2, numDays3
  };
  classRosterArray[++lastIndex] = new Student(studentID, firstName, lastName, emailAddress, age, parr, degree);
}

void Roster::printAll()
{
	cout << "ALL STUDENT INFO: " << endl;
    for (int i = 0; i <= Roster::lastIndex; i++){
      cout << classRosterArray[i] ->getStudentID();
			cout << "  ";
      cout << "First Name: " << classRosterArray[i] ->getFirstName();
			cout << "  ";
      cout << "Last Name: " << classRosterArray[i] ->getLastName();
			cout << ". ";
      cout << "Age: " << classRosterArray[i] ->getAge();
			cout << "  ";
      cout << "Number of Days: {" << classRosterArray[i]->getNumDays()[0] << ", " << classRosterArray[i]->getNumDays()[1] << ", " << classRosterArray[i]->getNumDays()[2] << "} ";
      cout << "Degree: " <<degreeString[classRosterArray[i] ->getDegree()]; cout << endl;
  }
cout << endl;
}

void Roster::printAvgDays(string studentID){
  cout << "AVERAGE DAYS TO COMPLETE COURSE: " << endl;      
	for (int i = 0; i <= Roster::lastIndex; i++){
        
    cout << classRosterArray[i]->getStudentID() << ": ";
    cout << (classRosterArray[i]->getNumDays()[0] + classRosterArray[i]->getNumDays()[1] + classRosterArray[i]->getNumDays()[2]) /3 << std::endl;
  }
  cout << std::endl;
}

void Roster::printInvalidEmails() {
	cout << "INVALID EMAIL ADRESSES: " << endl;

	for (int i = 0; i < 5; i++) {
		string emailStr = classRosterArray[i]->getEmailAddress();
		if ((emailStr.find('@') != string::npos) && emailStr.find('.') != string::npos) {
			if (emailStr.find(' ') != string::npos) {
				cout << emailStr;
				cout << endl;
			}
		}
		else {
			cout << emailStr;
			cout << endl;
		}
	}
cout << endl;
}

void Roster::printByDegree(Degree degree){
  Student::printHeader();
    for (int i = 0; i <= Roster::lastIndex; i++){
      if (Roster::classRosterArray[i]->getDegree() == degree) classRosterArray[i]->print();
    }
cout << endl;
}



void Roster::remove(string studentID)
{
	bool studentGone;

	cout << "REMOVING INFO FOR STUDENT A3" << endl;

  for (int i = 0; i <= 3; i++){
    if (classRosterArray[i]->getStudentID() == studentID){
      studentGone = true;
        if (i < 5){
          Student *temp = classRosterArray[i] = classRosterArray[4];
            classRosterArray[4] = temp;
					}
    Roster::lastIndex--;
    }
  }
    if (studentGone){
    cout << "STUDENT " << studentID << " REMOVED\n\n";
      this->printAll();
    }
    else cout << "STUDENT " << studentID << " NOT FOUND\n\n";
}