#ifndef PERSON_H
#define PERSON_H
#include<string>
using namespace std;

class Person {
  protected:
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
    virtual void GetInfo();
};

#endif // !PERSON_H
