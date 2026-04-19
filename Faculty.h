#ifndef FACULTY_H
#define FACULTY_H
#include<iostream>
#include<string>
#include<vector>
using namespace std;
#include "CollegeEmployee.h"

class Faculty : public CollegeEmployee {
  public:
    void SetStatus(bool inTenured);
    bool GetStatus();
  private:
    bool isTenured;
};

#endif // !FACULTY_H
