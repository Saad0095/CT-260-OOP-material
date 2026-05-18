#include <iostream>
using namespace std;

int main() {
  int a, b, c, *p1, *p2, *p3, temp;

  cout << "Enter three numbers:\n";
  cin >> a >> b >> c;

  p1 = &a;
  p2 = &b;
  p3 = &c;

  temp = *p1;
  *p1 = *p2;
  *p2 = *p3;
  *p3 = temp;

  cout << "\nNumbers after swapping:";
  cout << "\na = " << a << " b = " << b << " c = " << c;

  return 0;
}
