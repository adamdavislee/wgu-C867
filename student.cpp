#include <iostream>
#include <string>
#include <vector>
#include "degree.h"
#include "student.h"
using namespace std;
Student::Student(){}
Student::~Student(){}
void Student::setId(string a){
  id = a;
}
string Student::getId(){
  return id;
}
void Student::setFirstName(string a){
  firstName = a;
}
string Student::getFirstName(){
  return firstName;
}
void Student::setLastName(string a){
  lastName = a;
}
string Student::getLastName(){
  return lastName;
}
void Student::setEmail(string a){
  email = a;
}
string Student::getEmail(){
  return email;
}
void Student::setAge(int a){
  age = a;
}
int Student::getAge(){
  return age;
}
void Student::setCourseLengths(vector<int> a){
  courseLengths = a;
}
vector<int> Student::getCourseLengths(){
  return courseLengths;
}
void Student::setDegreeType(Degree a){
  degreeType = a;
}
Degree Student::getDegreeType(){
  return degreeType;
}
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreturn-type"
Degree Student::getDegreeProgram(){}
#pragma GCC diagnostic pop
void Student::print(){
  // 1 [tab] First Name: John [tab] Last Name: Smith [tab] Age: 20 [tab]daysInCourse: {35, 40, 55} Degree Program: Security
  string daysInCourse = "{";
  for (int i = 0; i < courseLengths.size(); ++i) {
    daysInCourse += to_string(courseLengths[i]) + ", ";
  }
  string dp;
  if (degreeType == SECURITY) {
    dp = "Security";
  } else if (degreeType == NETWORKING) {
    dp = "Networking";
  } else if (degreeType == SOFTWARE) {
    dp = "Software";
  }
  daysInCourse = daysInCourse.substr(0, daysInCourse.length() - 2) + "}";
  cout << id.substr(1) << "\t"
       << "First Name: " << firstName << "\t"
       << "Last Name: " << lastName << "\t"
       << "Age: " << age << "\t"
       << "daysInCourse: " << daysInCourse << "\t"
       << "Degree Program: " << dp << "\t"
       << "\n";
}