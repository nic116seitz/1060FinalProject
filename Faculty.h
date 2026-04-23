#ifndef FACULTY_H
#define FACULTY_H
#include "CollegeEmployee.h"
using namespace std;

class Faculty : public CollegeEmployee {
  public:
    void SetStatus(bool inTenured);
    bool GetStatus();
    void GetInfo();
  private:
    bool isTenured;
};

#endif // !FACULTY_H
