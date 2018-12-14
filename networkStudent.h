#ifndef NETWORK_STUDENT_H
#define NETWORK_STUDENT_H
#include "student.h"
class NetworkStudent : public Student {
  Degree degreeProgram = NETWORKING;
public:
  NetworkStudent();
  ~NetworkStudent();
  Degree getDegreeProgram();
};
#endif