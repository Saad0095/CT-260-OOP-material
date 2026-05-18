#include <iostream>
using namespace std;

int main() {
  int rollNo;
  float m1, m2, m3, m4, m5;
  float total, perc;

  cout << "Enter Roll Number: ";
  cin >> rollNo;

  cout << "Enter marks of 5 subjects:\n";
  cin >> m1 >> m2 >> m3 >> m4 >> m5;

  total = m1 + m2 + m3 + m4 + m5;
  perc = (total / 500) * 100;

  cout << "\nRoll Number: " << rollNo;
  cout << "\nTotal Marks: " << total;
  cout << "\nPercentage: " << perc << "%";

  return 0;
}
