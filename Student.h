#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"

class Student : public Person {
  private:
    string major;
    string fieldStudy;
    double GPA;
};

#endif // !
