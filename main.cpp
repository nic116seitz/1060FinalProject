#import <iostream>
#include <vector>
#include <stdexcept>
#include <string>

#include <ostream>
#import "CollegeEmployee.h"
#import "Faculty.h"
#import "Student.h"
using namespace std;

// Function for formating names to uppercase first letter to lowercase rest of the word
string FormatName(string inString) {
  int i;
  string newString;
  int strLen = inString.size();
  newString += toupper(inString[0]);
  for (i = 1; i < strLen; ++i) {
    newString += tolower(inString[i]);
  }
  return newString;
}

int ClassMenu() {
  int choicePerson;

  cout << "Please enter the number corresponding to the category: ";
  cout << endl;
  cout << "1. Faculty" << endl;
  cout << "2. Student" << endl;
  cout << "3. Other" << endl;
  cout << "4. Exit" << endl;
  cin >> choicePerson;

  return choicePerson;
}

void CreateEmployee(vector<CollegeEmployee>& collegeEmployees) {
  string fName;
  string lName;
  int age;
  CollegeEmployee newEmployee;
  string address;
  string ssn;
  int anComp;
  string deptName;
  string job;
  
  if (collegeEmployees.size() == 4) {
    cout << "Employee roster has reached capacity please delete entries before adding more" << endl;
    return;
  }
  else {
    cout << "Enter first name: ";
    cin >> fName;
    fName = FormatName(fName);
    cout << "Enter last name: ";
    cin >> lName;
    lName = FormatName(lName);
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter address: ";
    cin.ignore();
    getline(cin, address);
      
    try {
      cout << "Enter Job: ";
      cin >> job;
      newEmployee.SetFirst(fName);
      newEmployee.SetLast(lName);
      newEmployee.SetAge(age);
      newEmployee.SetAddress(address);
      newEmployee.SetJob(job);
      collegeEmployees.push_back(newEmployee);

      cout << "*****New Employee(Non-faculty)*****" << endl;
      newEmployee.GetInfo();
      cout << endl;
      cout << "Job: " << newEmployee.GetJob() << endl;
    }

    catch (invalid_argument) {
      cout << "Data mismatch please try again";
    }
  }
}

void CreateStudent(vector<Student>& studentVector) {
  string fName;
  string lName;
  int age;
  string address;
  Student newStudent;
  string major;
  string fieldOfStudy;
  double gpa;

  if (studentVector.size() == 7) {
    cout << "The student roster has reached its limit please delete an entry to add more" << endl;
    return;
  }

  else {
    try {
      cout << "Enter first name: ";
      cin >> fName;
      fName = FormatName(fName);
      cout << "Enter last name: ";
      cin >> lName;
      lName = FormatName(lName);
      cout << "Enter age: ";
      cin >> age;
      cout << "Enter address: ";
      cin.ignore();
      getline(cin, address);
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
      newStudent.SetAge(age);
      newStudent.SetAddress(address);
      newStudent.SetMajor(major);
      newStudent.SetField(fieldOfStudy);
      newStudent.SetGPA(gpa);
      studentVector.push_back(newStudent);

      cout << "*****New Student*****" << endl;
      newStudent.GetInfo();
      cout << endl;

    }
    catch(invalid_argument) {
      cout << "Invalid input type please try again checking entry types" << endl;
    }
    
  }
}

void CreateFaculty(vector<Faculty>& facultyRoster) {
  string fName;
  string lName;
  int age;
  int anComp;
  string address;
  string ssn;
  string deptName;
  string tenureInput;
  Faculty newTeacher;
  double gpa;
  bool tenure;

  if (facultyRoster.size() == 3) {
    cout << "The faculty roster has reached its limit please delete an entry to add more" << endl;
    return;
  }

  else {
    try {
      cout << "Enter first name: ";
      cin >> fName;
      fName = FormatName(fName);
      cout << "Enter last name: ";
      cin >> lName;
      lName = FormatName(lName);
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
      newTeacher.SetAge(age);
      newTeacher.SetAddress(address);
      newTeacher.SetSSN(ssn);
      newTeacher.SetAnnualComp(anComp);
      newTeacher.SetDeptName(deptName);
      newTeacher.SetStatus(tenure);
      facultyRoster.push_back(newTeacher);
      cout << endl;

      cout << "*****New Faculty*****" << endl;
      newTeacher.GetInfo();
    }
    catch(invalid_argument) {
      cout << "Invalid input type please try again checking entry types" << endl;
    }
  }
}
  
void PrintFaculty (vector<Faculty> currentFaculty) {
  int i;
  int vectorSize;
  Faculty facultyMember;
  
  cout << "***Faculty Profiles**" << endl;
  cout << "----------------------" << endl;

  vectorSize = currentFaculty.size();
  if (vectorSize == 0) {
    cout << "Note: There are no faculty" << endl;
  }

  else {
    for (i = 0; i < vectorSize; ++i) {
      facultyMember = currentFaculty.at(i);
      cout << i + 1 << ".";
      facultyMember.GetInfo();
    }
  }
}

void PrintStudents (vector<Student> currentStudents) {
  int i;
  int vectorSize;
  Student student;
  
  cout << "***Student Profiles**" << endl;
  cout << "----------------------" << endl;

  vectorSize = currentStudents.size();
  if (vectorSize == 0) {
    cout << "Note: There are no students" << endl;
  }

  else {
    for (i = 0; i < vectorSize; ++i) {
      student = currentStudents.at(i);
      cout << i + 1 << ".";
      student.GetInfo();
    }
  }
}

void PrintEmployees(vector<CollegeEmployee> currentEmployees) {
  int i;
  int vectorSize;
  CollegeEmployee employee;
  
  cout << "***Student Profiles**" << endl;
  cout << "----------------------" << endl;

  vectorSize = currentEmployees.size();
  if (vectorSize == 0) {
    cout << "Note: There are no students" << endl;
  }

  else {
    for (i = 0; i < vectorSize; ++i) {
      employee = currentEmployees.at(i);
      cout << i + 1 << ".";
      employee.GetInfo();
    }
  }
}

void DeleteFaculty(vector<Faculty>& currentFaculty) {
  int targIndex;

  PrintFaculty(currentFaculty);
  cout << "Please enter the number corresponding to the profile you";
  cout << " would like to remove";
  cin >> targIndex;
  targIndex -= 1;
  currentFaculty.erase(currentFaculty.begin() + targIndex);
}

void DeleteEmployee(vector<CollegeEmployee>& currentEmployees) {
  int targIndex;

  PrintEmployees(currentEmployees);
  cout << "Please enter the number corresponding to the profile you";
  cout << " would like to remove";
  cin >> targIndex;
  targIndex -= 1;
  currentEmployees.erase(currentEmployees.begin() + targIndex);
}

void DeleteStudent(vector<Student> currentStudents) {
  int targIndex;

  PrintStudents(currentStudents);
  cout << "Please enter the number corresponding to the profile you";
  cout << " would like to remove";
  cin >> targIndex;
  targIndex -= 1;
  currentStudents.erase(currentStudents.begin() + targIndex);
}

void menu(vector<Faculty>& currentFaculty, vector<Student>& currentStudents, vector<CollegeEmployee>& currentEmployees) {
    string query;
    int userChoice;

    userChoice = 0;

    while (userChoice != 5) {
      try {
        cout << "From the following menu please enter the number corresponding to your selection: " << endl;
        cout << "1. Add new Person" << endl;
        cout << "2. List all current profiles" << endl;
        cout << "3. Edit existing profile" << endl;
        cout << "4. Delete Profile" << endl;
        cout << "5. Exit" << endl;
        cin >> userChoice;

        if (userChoice == 1) {
          if (currentFaculty.size() == 3 &&
              currentEmployees.size() == 4 &&
              currentStudents.size() == 7) {
            cout << "All rosters are at capacity, please delete profiles in order to add more" << endl;
          }
          else {
            userChoice = ClassMenu();
            if (userChoice == 1) {
              CreateFaculty(currentFaculty);
            }
            else if(userChoice == 2) {
              CreateStudent(currentStudents);
            }
            else if (userChoice == 3) {
              CreateEmployee(currentEmployees);
            }
          }
        }
        
        else if (userChoice == 2) {
          
        }

        else if (userChoice == 3) {
          EditProfile(currentFaculty, currentStudents, currentEmployees);
        }

        else if (userChoice == 4) {
          PrintRoster(currentFaculty, currentStudents, currentEmployees);
        }
        else if (userChoice == 5) {
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
