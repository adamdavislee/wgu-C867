#ifndef SECURITY_STUDENT_H
#define SECURITY_STUDENT_H
#include "student.h"
class SecurityStudent : Student {
  const Degree degreeProgram = SECURITY;
public:
  SecurityStudent();
  ~SecurityStudent();
  Degree getDegreeProgram();
};
#endif