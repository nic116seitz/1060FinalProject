#include<iostream>
#include<string>
using namespace std;

class Person {
  private:
    string firstName;
    string lastName;
    int age;
    string streetName;
  public:
    void SetFirst(string inFirst);
    void SetLast(string inLast);
    void SetAge(int inAge);
    void SetAddress(string inAddress);
    string GetName();  
    int GetAge();
    string GetStreetName();
    void GetInfo();
};

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
  cout << "---Person 1---" << endl;
  cout << "Name: " << GetName() << endl;
  cout <<
}
// Class testing to follow 
int main() {
  string firstName;
  string lastName;
  int age;
  string street;
  Person person;

  cout << "firstName: ";
  cin >> firstName;
  cout << endl;
  cout << "Last Name: ";
  cin >> lastName;
  cout << endl << "Age: ";
  cin >> age;
  cout << endl << "StreetName: ";
  getline(cin, street);
  person.SetFirst(firstName);
  person.SetLast(lastName);
  person.SetAge(age);
  person.SetAddress(street);



  return 0;
}
