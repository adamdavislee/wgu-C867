#ifndef NETWORK_STUDENT_H
#define NETWORK_STUDENT_H
#include "student.h"
class NetworkStudent : Student {
  const Degree degreeProgram = NETWORKING;
public:
  NetworkStudent();
  ~NetworkStudent();
  Degree getDegreeProgram();
};
#endif