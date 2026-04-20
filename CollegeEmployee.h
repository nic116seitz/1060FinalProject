#ifndef COLLEGE_EMPLOYEE_H
#define COLLEGE_EMPLOYEE_H 
#include<string>
#include <vector>
using namespace std;
#include "Person.h"

class CollegeEmployee : public Person {
  public:
    void SetSSN(string inSSN);
    void SetAnnualComp(int inComp);
    void SetDeptName(string inDeptName);
    void Job(string inJob);
  protected:
    string ssn;
    int annualComp;
    string deptName;
    string job;
};
#endif // !COLLEGE_EMPLOYEE_H
