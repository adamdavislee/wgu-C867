#include <iostream>
#include "roster.h"
#include "networkStudent.h"
#include "securityStudent.h"
#include "softwareStudent.h"
using namespace std;
const string studentData[] = {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
			      "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
			      "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
			      "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
			      "A5,Adam,Lee  ,adamdavislee@gmail.com,21,10,20,30,SECURITY",};
vector<Student> classRosterArray;
vector<string> split(string a, string separator){
  vector<string> tokens;
   while (!(a.find(separator) == -1)) {
    tokens.push_back(a.substr(0, a.find(separator)));
    a = a.substr(a.find(separator) + 1);
   }
   tokens.push_back(a);
  return tokens;
};
void Roster::add(string id, string firstName, string lastName, string email, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degreeProgram) {
  Student student;
  vector<int> courseLengths;
  courseLengths.push_back(daysInCourse1);
  courseLengths.push_back(daysInCourse2);
  courseLengths.push_back(daysInCourse3);
  student.setId(id);
  student.setFirstName(firstName);
  student.setLastName(lastName);
  student.setEmail(email);
  student.setAge(age);
  student.setCourseLengths(courseLengths);
  student.setDegreeType(degreeProgram);
  classRosterArray.push_back(student);
};
void Roster::remove(string id) {
  int isFound = 0;
  for (int i = 0; i < classRosterArray.size(); ++i) {
    if (classRosterArray[i].getId() == id) {
      isFound = 1;
      classRosterArray.erase(classRosterArray.begin() + i);
    }
  }
  if (!isFound) {
    cout << "Failed to remove element " << id << " from classRosterArray" << endl;
  }
}
void Roster::printAll() {
  for (int i = 0; i < classRosterArray.size(); ++i) {
    classRosterArray[i].print();
  }
}
void Roster::printAverageDaysInCourse(string id) {
  for (int i = 0; i < classRosterArray.size(); ++i) {
    vector<int> studentCourseLengths = classRosterArray[i].getCourseLengths();
    if (classRosterArray[i].getId() == id) {
      cout << (studentCourseLengths[0]
	       + studentCourseLengths[1]
	       + studentCourseLengths[2])/3.0
	   << "\n";
    }
  }
}
void Roster::printInvalidEmails() {
  for (int i = 0; i < classRosterArray.size(); ++i) {
    string email = classRosterArray[i].getEmail();
    if ((email.find("@") == -1) or (email.find(".") == -1) or !(email.find(" ") == -1)) {
      cout << email << "\n";
    }
  }
}
void Roster::printByDegreeProgram(Degree degreeProgram) {
  for (int i = 0; i < classRosterArray.size(); ++i) {
    Student student = classRosterArray[i];
    if (student.getDegreeType() == degreeProgram) {
      student.print();
    }
  }
}
int main(){
  Roster classRoster;
  for (int i = 0; i < 5; ++i) {
    string id, firstName, lastName, email;
    int age, daysInCourse1, daysInCourse2, daysInCourse3;
    Degree degree;
    vector<string> studentDatom = split(studentData[i], ",");
    for (int i = 0; i < 9; ++i) {
      string element = studentDatom[i];
      switch (i) {
      case 0: {
	  id = element;
	  break;
	}
      case 1: {
	  firstName = element;
	  break;
	}
      case 2: {
	  lastName = element;
	  break;
	}
      case 3: {
	  email = element;
	  break;
	}
      case 4: {
	age = stoi(element);
	break;
	}
      case 5: {
	  daysInCourse1 = stoi(element);
	  break;
	}
      case 6: {
	daysInCourse2 = stoi(element);
	break;
	}
      case 7: {
	daysInCourse3 = stoi(element);
	break;
	}
      case 8: {
	  if (element == "SECURITY") {
	    degree = SECURITY;
	  } else if (element == "NETWORKING") {
	    degree = NETWORKING;
	  } else if (element == "SOFTWARE") {
	    degree = SOFTWARE;
	  }
      }
      }
    }
    classRoster.add(id, firstName, lastName, email, age, daysInCourse1, daysInCourse2, daysInCourse3, degree);
  }
  /*
  cout << "Course Title: Scripting and Programming Applications\tProgramming Language: C++\tStudent Id: 000913520\tName: Adam Lee\n\nFormatted Student Data:\n";
  classRoster.printAll();
  cout << "\nInvalid Emails:\n";
  classRoster.printInvalidEmails();
  cout << "\nAverage Days in Course:\n";
  for (int i = 0; i < classRosterArray.size(); ++i) {
    classRoster.printAverageDaysInCourse(classRosterArray[i].getId());
  }
  cout << "\nSoftware Degrees:\n";
  classRoster.printByDegreeProgram(SOFTWARE);
  classRoster.remove("A3");
  cout << "\nError for removal of nonexistent item:\n";
  classRoster.remove("A3");
  classRoster.~Roster();
  */
  Student student;
  {
  explicit SoftwareStudent student;
  }
  student.setId("A1");
  Student *v[1];
  v[0] = &student;
  cout << (*v[0]).getDegreeProgram()
       << "\n";
}