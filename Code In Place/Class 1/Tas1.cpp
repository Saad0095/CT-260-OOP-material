#include <iostream>

using namespace std;

int main() {
  int n = 5, total = 0, avg = 0;
  int *marks = new int[n];

  cout << "Enter marks of student" << endl;
  for (int i = 0; i < n; i++) {
    cout << "Subject " << i+1 << ": ";
    cin >> marks[i];
  }

  for (int i = 0; i < n; i++) {
    total += marks[i];
  }

  avg = total / n;
  cout << "The average marks are " << avg;
  delete[] marks;
  return 0;
}