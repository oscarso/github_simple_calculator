//File: TestSimpleCalculator.cpp
#include <iostream>
using namespace std;

#include "SimpleCalculator.h"


void test1() {
  SimpleCalculator sc;
  int n1 = 2;
  int n2 = 5;
  int r = sc.add(n1, n2);
  cout << "\n" << "n1 + n2 = " << n1 << " + " << n2 << " = " << r << "       ";
  if (n1 + n2 != r) {
     cout << "Fail" << endl;
  } else {
     cout << "Pass" << endl;
  }
}

void test2() {
  SimpleCalculator sc;
  int n1 = 2;
  int n2 = 1;
  int r = sc.sub(n1, n2);
  cout << "\n" << "n1 - n2 = " << n1 << " - " << n2 << " = " << r << "       ";
  if (n1 - n2 != r) {
     cout << "Fail" << endl;
  } else {
     cout << "Pass" << endl;
  }
}

int main(void) {
  test1();
  test2();
  return 0;
}
