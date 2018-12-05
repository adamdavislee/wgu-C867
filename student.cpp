#include <iostream>
#include <string>
#include <vector>
#include "student.h"
using namespace std;
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
void Student::setAge(string a){
  age = a;
}
string Student::getAge(){
  return age;
}
void Student::setCourseLengths(vector<string> a){
  courseLengths = a;
}
vector<string> Student::getCourseLengths(){
  return courseLengths;
}
void Student::setDegreeType(string a){
  degreeType = a;
}
string Student::getDegreeType(){
  return degreeType;
}