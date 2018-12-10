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
void Student::print(){}