#ifndef SOFTWARE_STUDENT_H
#define SOFTWARE_STUDENT_H
#include "student.h"
class SoftwareStudent : public Student {
  Degree degreeProgram = SOFTWARE;
public:
  SoftwareStudent();
  ~SoftwareStudent();
  Degree getDegreeProgram();
};
#endif