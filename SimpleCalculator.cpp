//File: SimpleCalculator.cpp
#include <iostream>
using namespace std;


class SimpleCalculator {
	public:
		int add(int n1, int n2) { return (n1 + n2); }
};



int main(void) {
  SimpleCalculator sc;
  int n1 = 2;
  int n2 = 5;
  cout << "\n" << "n1 + n2 = " << n1 << " + " << n2 << " = " << sc.add(n1, n2) << endl;
  return 0;
}
