#import <iostream>
#include <ostream>
#import "CollegeEmployee.h"
using namespace std;

void menu() {
  cout << "From the following menu please enter the number corresponding to your selection: " << endl;
  cout << "1. Add new faculty" << endl;
  cout << "2. Add new student" << endl;
  cout << "3. List all current profiles" << endl;
  cout << "4. Edit existing profile" << endl;
}

int main () {
  CollegeEmployee employee;
  string fName;
  string lName;
  int age;
  string address;
  string ssn;
  int anComp;
  string deptName;
  string job;
  
  cout << "Enter first name: ";
  cin >> fName;
  cout << "Enter last name: ";
  cin >> lName;
  cout << "Enter age: ";
  cin >> age;
  cout << "Enter address: ";
  cin.ignore();
  getline(cin, address);
  cout << "Enter Social Security Number (SSN): ";
  cin >> ssn;
  cout << "Enter Annual Comp: ";
  cin >> anComp;
  cout << "Enter Department Name: ";
  cin.ignore();
  getline(cin, deptName);
  cout << "Enter Job: ";
  cin >> job;
  
  employee.SetFirst(fName);
  employee.SetLast(lName);
  employee.SetAge(age);
  employee.SetAddress(address);
  employee.SetSSN(ssn);
  employee.SetAnnualComp(anComp);
  employee.SetDeptName(deptName);
  employee.SetJob(job);
  employee.GetInfo();
  
  return 0;
}
