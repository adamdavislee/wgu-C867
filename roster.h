#ifndef ROSTER_H
#define ROSTER_H
#include <string>
#include "degree.h"
class Roster {
  /*
  Roster();
  ~Roster();
  */
 public:
  void add(std::string id, std::string firstName, std::string lastName, std::string email, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degreeProgram);
  void remove(std::string id);
  void printAll();
  void printAverageDaysInCourse(std::string id);
  void printInvalidEmails();
  void printByDegreeProgram(Degree degreeProgram);
};
#endif