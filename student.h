#ifndef STUDENT_H
#define STUDENT_H
#include "degree.h"
#include <string>
#include <vector>
class Student {
  std::string id;
  std::string firstName;
  std::string lastName;
  std::string email;
  int age;
  std::vector<int> courseLengths;
  Degree degreeType;
 public:
  Student();
  ~Student();
  std::string getId();
  void setId(std::string);
  std::string getFirstName();
  void setFirstName(std::string);
  std::string getLastName();
  void setLastName(std::string);
  std::string getEmail();
  void setEmail(std::string);
  int getAge();
  void setAge(int);
  Degree getDegreeType();
  void setDegreeType(Degree);
  std::vector<int> getCourseLengths();
  void setCourseLengths(std::vector<int>);
  void setDegreeProgram(Degree);
  virtual Degree getDegreeProgram();
  virtual void print();
};
#endif