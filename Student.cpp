#include "Student.h"
#include <string>
using namespace std;

void Student::SetMajor(string inMajor) {
  major = inMajor;
}

void Student::SetField(string inField) {
  fieldStudy = inField;
}

void Student::SetGPA(double inGPA) {
  gpa = inGPA;
}

string Student::GetField() {
  return fieldStudy;
}

string Student::GetMajor() {
  return major;
}

double Student::GetGPA() {
  return gpa;
}

void Student::GetInfo() {
  Person::GetInfo();

}
