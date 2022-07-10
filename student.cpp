#include "student.h"
#include <string>

string Student::getStudentID(){
  return studentID;
}
string Student::getFirstName(){
  return firstName;
}
string Student::getLastName(){
  return lastName;
}
string Student::getEmailAddress(){
  return emailAddress;
}
int Student::getAge(){
  return age;
}
double *Student::getNumDays(){
  return numDays;
}
Degree Student::getDegree(){
  return degree;
}

void Student::setstudentID(string studentID){
  this->studentID = studentID;
}
void Student::setfirstName(string firstName){
  this->firstName = firstName;
}
void Student::setlastName(string lastName){
  this->lastName = lastName;
}
void Student::setemailAddress(string emailAddress){
  this->emailAddress = emailAddress;
}
void Student::setage(int age){
  this->age = age;
}
void Student::setNumDays(int numDays[]){
  this->numDays[0] = numDays[0];
	this->numDays[1] = numDays[1];
	this->numDays[2] = numDays[2];
}
void Student::setDegree(Degree degree){
  this->degree  = degree;
}

Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, int numDays[], Degree degree){ 
    
this->studentID = studentID;
this->firstName = firstName;
this->lastName = lastName;
this->emailAddress = emailAddress;
this->age = age;
this->numDays[0] = numDays[0];
this->numDays[1] = numDays[1];
this->numDays[2] = numDays[2];	
this->degree = degree;
}

void Student::printHeader(){}

void Student::print(){
  cout << "Student ID: " << studentID;
  cout << "  First Name: " << firstName;
  cout << "  Last Name: " << lastName;
  cout << "  Age: " << age;
  cout << "  Number of Days: {" << numDays[0] << "," << numDays[1] << "," << numDays[2];
  cout << "} Degree: " << degreeString[degree] << endl;
}