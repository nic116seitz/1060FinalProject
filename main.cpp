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
   
  employee.SetFirst(fName);

  cout << "Enter last name: ";
  cin >> lName;
  
  employee.SetLast(lName);

  cout << "Enter age: ";
  cin >> age;
  
  employee.SetAge(age);

  cout << "Enter address: ";
  cin.ignore();
  getline(cin, address);
  
  employee.SetAddress(address);

  cout << "Enter Social Security Number (SSN): ";
  cin >> ssn;
  
  employee.SetSSN(ssn);
 
  cout << "Enter Annual Comp: ";
  cin >> anComp;
  
  employee.SetAnnualComp(anComp);

  cout << "Enter Department Name: ";
  cin.ignore();
  getline(cin, deptName);
  
  employee.SetDeptName(deptName);

  cout << "Enter Job: ";
  cin >> job;
  
  employee.SetJob(job);
  
  employee.GetInfo();
  

  return 0;
}
