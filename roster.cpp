#include <iostream>
#include "degree.h"
#include "student.h"
using namespace std;

int main()
{
  Degree a = SOFTWARE;
  Student b;
  b.setId("a");
  b.setDegreeType("ba");
  cout << b.getDegreeType() << "\n";
}
