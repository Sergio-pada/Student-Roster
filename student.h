#include <iostream>
#include <array>
#include <string>
#include "degree.h"

class Student{
protected:  
  string studentID;
  string firstName;
  string lastName;
  string emailAddress;
  int age;
  double numDays[3];
  Degree degree;

public:
  Student(string studentID, string firstName, string lastName, string emailAddress, int age, int numDays[], Degree degree);
 
  string getStudentID();
  string getFirstName();
  string getLastName();
  string getEmailAddress();
  int getAge();
  double *getNumDays();
  Degree getDegree();

  void setstudentID (string studentID);
	void setfirstName (string firstName);
  void setlastName (string lastName);
  void setemailAddress (string emailAddress);
  void setage (int age);
  void setNumDays (int numDays[]);
  void setDegree (Degree degree);
    
  static void printHeader();
    
  void print ();
};