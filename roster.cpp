#include <iostream>
#include "degree.h"
#include "student.h"
#include "securityStudent.h"
using namespace std;
vector<string> split(string a, string separator){
  vector<string> tokens;
  int done = 0;
  int beginning = 0;
  while (!done) {
    tokens.push_back(a.substr(beginning, a.find(separator)));
    a = a.substr(a.find(separator));
  }
  return tokens;
};
int main(){
  const string studentData[] = {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
				"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
				"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
				"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
				"A5,adam,lee,adamdavislee@gmail.com,21,1,2,3,SOFTWARE"};
  int classRosterSize = sizeof(studentData)/sizeof(studentData[0]);
  Student * classRosterArray[5];
  string a = "abc";
  string b = a.substr(1);
  cout << b << "\n";
}
