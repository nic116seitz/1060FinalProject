#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"

class Student : public Person {
  private:
    string major;
    string fieldStudy;
    double gpa;
  public:
    void SetMajor(string inMajor);
    void SetField(string inField);
    void SetGPA(double inGPA);
};

#endif // !
