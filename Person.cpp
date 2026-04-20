#include<string>
#include<iostream>
using namespace std;
#include "Person.h"

void Person::SetFirst(string inFirst) {
  firstName = inFirst;
}

void Person::SetLast(string inLast) {
  lastName = inLast;
}

void Person::SetAge(int inAge) {
  age = inAge;
}

void Person::SetAddress(string inAddress) {
  streetName = inAddress;
}

string Person::GetName() {
  return firstName + " " + lastName;
}

int Person::GetAge() {
  return age;
}

string Person::GetStreetName() {
  return streetName;
}

void Person::GetInfo() {
  cout << "--------" << endl;
  cout << "Name: " << GetName() << endl;
  cout << "Age: " << GetAge() << endl;
  cout << "Street Name: " << GetStreetName() << endl;
}
// Class testing to follow 
int main() {
  string firstName;
  string lastName;
  int age;
  string street;
  Person person;

  cout << "First Name: ";
  cin >> firstName;
  cout << "Last Name: ";
  cin >> lastName;
  cout << "Age: ";
  cin >> age;
  cout << "Street Name: ";
  cin.ignore();
  getline(cin, street);
  person.SetFirst(firstName);
  person.SetLast(lastName);
  person.SetAge(age);
  person.SetAddress(street);
  person.GetInfo();



  return 0;
}
