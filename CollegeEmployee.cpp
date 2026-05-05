#include<iostream>
#include<string>
#include"CollegeEmployee.h"
using namespace std;

void CollegeEmployee::SetSSN(string inSSN) {
  ssn = inSSN;
} 

void CollegeEmployee::SetAnnualComp(int inComp) {
  annualComp = inComp;
}

void CollegeEmployee::SetDeptName(string inDeptName) {
 deptName = inDeptName;  
} 

void CollegeEmployee::SetJob(string inJob) {
  job = inJob;
}

string CollegeEmployee::GetSSN() {
  return ssn;
}

int CollegeEmployee::GetAnnComp() {
  return annualComp;
}

string CollegeEmployee::GetDeptName() {
  return deptName;
}

string CollegeEmployee::GetJob() {
  return job;
}

void CollegeEmployee::GetInfo() {
  Person::GetInfo();
  cout << "Social Security Number: " << GetSSN() << endl; 
  cout << "Annual Salary: " << GetAnnComp() << endl;
  cout << "Department: " << GetDeptName() << endl;
  cout << endl;
}
