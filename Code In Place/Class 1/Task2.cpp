#include <iostream>

using namespace std;

void countCalls() {
  static int count = 0;
  count++;

  cout << "Function is called " << count << " times" << endl;
}

int main() {
  countCalls();
  countCalls();
  countCalls();
  countCalls();
  countCalls();
  return 0;
}