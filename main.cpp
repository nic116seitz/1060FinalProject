#import <iostream>
#include <vector>
#include <stdexcept>
#include <string>

#include <ostream>
#import "CollegeEmployee.h"
#import "Faculty.h"
#import "Student.h"
using namespace std;

void CreatePerson(vector<Faculty>& facultyRoster, vector<Student>& studentRoster, vector<CollegeEmployee>& collegeEmployees) {
  string fName;
  string lName;
  int age;
  Faculty newTeacher;
  Student newStudent;
  CollegeEmployee newEmployee;
  int choicePerson;
  string address;
  string ssn;
  int anComp;
  string deptName;
  string job;
  string major;
  string fieldOfStudy;
  string tenureInput;
  bool tenure;
  double gpa;
  
  cout << "Enter first name: ";
  cin >> fName;
  cout << "Enter last name: ";
  cin >> lName;
  cout << "Enter age: ";
  cin >> age;
  cout << "Enter address: ";
  cin.ignore();
  getline(cin, address);

  cout << "Please enter the number corresponding to the category for this person: ";
  cout << endl;
  cout << "1. Faculty" << endl;
  cout << "2. Student" << endl;
  cout << "3. Other" << endl;
  cout << "4. Exit" << endl;
  cin >> choicePerson;

  try {
    if (choicePerson == 1) {
      cout << "Enter Social Security Number (SSN): ";
      cin >> ssn;
      cout << "Enter Annual Comp: ";
      cin >> anComp;
      cout << "Enter Department Name: ";
      cin.ignore();
      getline(cin, deptName);
      cout << "Are they tenured (enter yes or no): ";
      cin >> tenureInput;

      if (tenureInput == "yes" || tenureInput == "Yes" || tenureInput == "YES") {
        tenure = true;
      }

      else {
        tenure = false;
      }

      newTeacher.SetFirst(fName);
      newTeacher.SetLast(lName);
      newTeacher.SetAddress(address);
      newTeacher.SetSSN(ssn);
      newTeacher.SetAnnualComp(anComp);
      newTeacher.SetDeptName(deptName);
      newTeacher.SetStatus(tenure);
      facultyRoster.push_back(newTeacher);
    }
    
    else if (choicePerson == 2) {
      cout << "Please enter the major of the student: ";
      cin.ignore();
      getline(cin, major);
      cout << "Please enter the their field of study: ";
      cin.ignore();
      getline(cin, fieldOfStudy);
      cout << "Please enter the GPA for the student: ";
      cin >> gpa;
      newStudent.SetFirst(fName);
      newStudent.SetLast(lName);
      newStudent.SetAddress(address);
      newStudent.SetMajor(major);
      newStudent.SetField(fieldOfStudy);
      newStudent.SetGPA(gpa);
      studentRoster.push_back(newStudent);
    }

    else if (choicePerson == 3) {
      cout << "Enter Job: ";
      cin >> job;
      newEmployee.SetFirst(fName);
      newEmployee.SetLast(lName);
      newEmployee.SetAddress(address);
      newEmployee.SetJob(job);
      collegeEmployees.push_back(newEmployee);
    }

    else if (choicePerson == 4) {
    }

    else {
      cout << "Invalid input: please try again" << endl;
    }
  }

  catch (invalid_argument) {
    cout << "Invalid Input: your entry is not a number";
  }
}


void PrintRoster(vector<Faculty> inFaculty, vector<Student> inStudent, vector<CollegeEmployee> inEmployees) {
  int i;
  int vectorSize;
  Faculty currentFaculty;
  Student currentStudent;
  CollegeEmployee currentEmployee;
  
  vectorSize = inFaculty.size();
  if (vectorSize == 0) {
    cout << "There are no faculty";
  }

  else {
    for (i = 0; i < vectorSize; ++i) {
      currentFaculty = inFaculty.at(i);
      currentFaculty.GetInfo();
    }
  }
  vectorSize = inStudent.size();
  if (vectorSize == 0) {
    cout << "There are no students";
  }
  
  else {
    for (i = 0; i < vectorSize; ++i) {
      currentStudent = inStudent.at(i);
      currentStudent.GetInfo();
    }
  }
  
  vectorSize = inEmployees.size();
  if (vectorSize == 0) {
    cout << "There are no non-faculty employees";
  }

  for (i = 0; i < vectorSize; ++i) {
    currentEmployee = inEmployees.at(i);
    currentEmployee.GetInfo();
  }
}

void EditProfile(vector<Faculty>& inFaculty, vector<Student>& inStudent, vector<CollegeEmployee>& inEmployees) {
  string targName;
  string targSsn;
  int i;
  int rosterSize;
  
  rosterSize = inFaculty.size();
  for (i = 0; i < rosterSize; ++i) {
    //SearchFunction
  }


  rosterSize = inStudent.size();
  for (i = 0; i < rosterSize; ++i) {
    //SearchFunction
  }

  rosterSize = inEmployees.size();
  for (i = 0; i < rosterSize; ++i) {
    //SearchFunction
  }

}

// !! DEBUG !! Something here is causing infinite looping
void menu(vector<Faculty> currentFaculty, vector<Student> currentStudents, vector<CollegeEmployee> currentEmployees) {
    string query;
    int userChoice;

    userChoice = 0;

    while (userChoice != 4) {
      try {
        cout << "From the following menu please enter the number corresponding to your selection: " << endl;
        cout << "1. Add new Person" << endl;
        cout << "2. List all current profiles" << endl;
        cout << "3. Edit existing profile" << endl;
        cout << "4. Exit" << endl;
        cin >> userChoice;

        if (userChoice == 1) {
          CreatePerson(currentFaculty, currentStudents, currentEmployees);
        }
        
        else if (userChoice == 2) {
          PrintRoster(currentFaculty, currentStudents, currentEmployees);
        }

        else if (userChoice == 3) {
          EditProfile(currentFaculty, currentStudents, currentEmployees);
        }

        else if (userChoice == 4) {
          exit(0);
        }

      }
      catch (invalid_argument) {
        cout << "Invalid Entry: Please try again!" << endl;
      }
    }
}

int main () {
  vector<Faculty> currentFaculty;
  vector<CollegeEmployee> currentEmployees;
  vector<Student> currentStudents;
  menu(currentFaculty, currentStudents, currentEmployees);

  return 0;
}
