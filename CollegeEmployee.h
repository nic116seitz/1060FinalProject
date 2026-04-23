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
    void SetJob(string inJob);
    string GetSSN();
    int GetAnnComp();
    string GetDeptName();
    string GetJob();
    void GetInfo();
  protected:
    string ssn;
    int annualComp;
    string deptName;
    string job;
};
#endif // !COLLEGE_EMPLOYEE_H
