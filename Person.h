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
    virtual void SetFirst(string inFirst);
    virtual void SetLast(string inLast);
    virtual void SetAge(int inAge);
    virtual void SetAddress(string inAddress);
    virtual string GetName();  
    virtual int GetAge();
    virtual string GetStreetName();
    virtual void GetInfo();
};

#endif // !PERSON_H
