#include<iostream>
#include"Faculty.h"
using namespace std;

void Faculty::SetStatus(bool inTenured) {
  isTenured = inTenured;
}

bool Faculty::GetStatus() {
  return isTenured;
}

void Faculty::GetInfo() {
  CollegeEmployee::GetInfo();
  if (isTenured) {
    cout << "Tenure Status: Tenured." << endl;
  }
  else {
    cout << "Tenure Status: Not Tenured." << endl;
  }
}
