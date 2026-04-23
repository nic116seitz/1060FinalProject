#import <iostream>
#include <ostream>
#import "CollegeEmployee.h"
using namespace std;

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
  cout << endl; 
  employee.SetFirst(fName);

  cout << "Enter last name: ";
  cin >> lName;
  cout << endl;
  employee.SetLast(lName);

  cout << "Enter age: ";
  cin >> age;
  cout << endl;
  employee.SetAge(age);

  cout << "Enter address: ";
  cin.ignore();
  getline(cin, address);
  cout << endl;
  employee.SetAddress(address);

  cout << "Enter Social Security Number (SSN): ";
  cin >> ssn;
  cout << endl;
  employee.SetSSN(ssn);
 
  cout << "Enter Annual Comp: ";
  cin >> anComp;
  cout << endl;
  employee.SetAnnualComp(anComp);

  cout << "Enter Department Name: ";
  cin.ignore();
  getline(cin, deptName);
  cout << endl;
  employee.SetDeptName(deptName);

  cout << "Enter Job: ";
  cin >> job;
  cout << endl;
  employee.SetJob(job);
  
  employee.GetInfo();
  

  return 0;
}
