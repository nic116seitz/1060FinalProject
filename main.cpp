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

  cout << "Enter last name: ";
  cin >> lName;
  cout << endl;

  cout << "Enter age: ";
  cin >> age;
  cout << endl;

  cout << "Enter address: ";
  cin >> address;
  cout << endl;

  cout << "Enter Social Security Number (SSN): ";
  cin >> ssn;
  cout << endl;
 
  cout << "Enter Annual Comp: ";
  cin >> anComp;
  cout << endl;

  cout << "Enter Department Name: ";
  cin >> deptName;
  cout << endl;

  cout << "Enter Job: ";
  cin >> job;
  cout << endl;


  return 0;
}
