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

// Class testing to follow 
int main() {

  return 0;
}
