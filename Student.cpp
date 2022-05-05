#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int ID, const char Sname[]) {
  studentID = ID;
  strcpy( name, Sname);
}

// Display StudentId and Name
void Student::display() {

  cout<< "Student ID =" << studentID << endl;
  cout<< "Student name =" << name << endl;
  
}
