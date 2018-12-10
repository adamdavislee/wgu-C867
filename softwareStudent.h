#ifndef SOFTWARE_STUDENT_H
#define SOFTWARE_STUDENT_H
#include "student.h"
class SoftwareStudent : Student {
  const Degree degreeProgram = SOFTWARE;
public:
  SoftwareStudent();
  ~SoftwareStudent();
  Degree getDegreeProgram();
};
#endif