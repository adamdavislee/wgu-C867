#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <vector>
class Student {
  std::string id;
  std::string firstName;
  std::string lastName;
  std::string email;
  std::string age;
  std::vector<std::string> courseLengths;
  std::string degreeType;
 public:
  std::string getId();
  void setId(std::string);
  std::string getFirstName();
  void setFirstName(std::string);
  std::string getLastName();
  void setLastName(std::string);
  std::string getEmail();
  void setEmail(std::string);
  std::string getAge();
  void setAge(std::string);
  std::string getDegreeType();
  void setDegreeType(std::string);
  std::vector<std::string> getCourseLengths();
  void setCourseLengths(std::vector<std::string>);
};
#endif